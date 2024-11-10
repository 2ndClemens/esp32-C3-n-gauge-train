#include <Arduino.h>

#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>
#include <BLE2902.h>
#include <Adafruit_NeoPixel.h>

#include "leddata.h"
#include "leddata2.h"
#include "leddata3.h"

#define BUTTON 3
#define LED 2
#define LED2 10
#define NUMPIXELS 1
#define NUMPIXELS2 3

const int freq = 1000;
const int resolution = 8;

#define SERVICE_UUID "4fafc201-1fb5-459e-8fcc-c5c9c331914b"
#define CHARACTERISTIC_UUID "beb5483e-36e1-4688-b7f5-ea07361b26a8"
#define CHARACTERISTIC_UUID_SPEED "beb5483f-36e1-4688-b7f5-ea07361b26a8"

Adafruit_NeoPixel pixels(NUMPIXELS, LED, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels2(NUMPIXELS2, LED2, NEO_GRB + NEO_KHZ800);
TaskHandle_t TaskHandle_buttonRead;
TaskHandle_t TaskHandle_Led;

int buttonLastState = HIGH;
int buttonCurrentState;
int buttonCount = 1;

int high = 255;
int mid = 128;
int low = 0;

int motor1Pin1 = 6;
int motor1Pin2 = 5;
int enable1Pin = 4;

int dutyCycle1 = 200;

int speed = 0;
int maxSpeed = 200;
int targetSpeed = maxSpeed;


const int pwmChannel1 = 4;

  struct LedInfo {
    uint8_t ledNum;             // The index number for the LED
    uint8_t colorIndex;
     uint16_t timerIndex; 
    const uint8_t (*playlist)[4];  // Pointer to the playlist array
    uint16_t playlistLength;  // Length of the playlist array
};
LedInfo leds[] = {
    { 0,0,0, brightness, sizeof(brightness) / sizeof(brightness[0]) },
    { 1,0,0, brightness2, sizeof(brightness2) / sizeof(brightness2[0]) },
    { 2,0,0, brightness3, sizeof(brightness3) / sizeof(brightness3[0]) }

};

class MyCallbacks : public BLECharacteristicCallbacks
{
  void onWrite(BLECharacteristic *pCharacteristic)
  {
    std::string rxValue = pCharacteristic->getValue();

    if (rxValue.length() > 0)
    {

      Serial.println("*********");
      Serial.print("Received Value: ");
      Serial.print(rxValue.c_str());
    }

    if (rxValue == "backward")
    {
      targetSpeed = -maxSpeed;
    }
    if (rxValue == "forward")
    {
      targetSpeed = maxSpeed;
    }
  }
};

class MyCallbacksSpeed : public BLECharacteristicCallbacks
{
  void onWrite(BLECharacteristic *pCharacteristic)
  {
    std::string rxValue = pCharacteristic->getValue();

    if (rxValue.length() > 0)
    {

      Serial.println("*********");
      Serial.print("Received Value: ");
      if (targetSpeed < 0)
      {
        targetSpeed = -(255 - (atoi(rxValue.c_str()) / 16));
      }
      else
      {
        targetSpeed = 255 - (atoi(rxValue.c_str()) / 16);
      }

      Serial.print(String(targetSpeed));
    }

    // if (rxValue == "backward")
    // {
    //     targetSpeed = -maxSpeed;
    // }
    // if (rxValue == "forward")
    // {
    //    targetSpeed = maxSpeed;
    // }
  }
};

void buttonRead(void *pvParameters)
{
  while (true)
  {
    buttonCurrentState = digitalRead(BUTTON);
    if (buttonLastState == LOW && buttonCurrentState == HIGH)
    {
      Serial.println("Button Pressed!");
      buttonCount++;
      if (buttonCount > 6)
      {
        buttonCount = 1;
      }
    }
    buttonLastState = buttonCurrentState;
    vTaskDelay(10 / portTICK_RATE_MS);
  }
}

void changeLedState(void *pvParameters)
{


 
  while (true)
  {
    for (int i = 0; i < 3; i++) {
    //int elements = sizeof(brightness) / sizeof(brightness[0]);

    int count = pgm_read_byte(&(leds[i].playlist[leds[i].colorIndex][0])) * 10;
    int red = pgm_read_byte(&(leds[i].playlist[leds[i].colorIndex][1]));
    int green = pgm_read_byte(&(leds[i].playlist[leds[i].colorIndex][2]));
    int blue = pgm_read_byte(&(leds[i].playlist[leds[i].colorIndex][3]));
    int nextRed = pgm_read_byte(&(leds[i].playlist[leds[i].colorIndex + 1][1]));
    int nextGreen = pgm_read_byte(&(leds[i].playlist[leds[i].colorIndex + 1][2]));
    int nextBlue = pgm_read_byte(&(leds[i].playlist[leds[i].colorIndex + 1][3]));

    pixels2.setPixelColor(leds[i].ledNum, pixels2.Color(red + (nextRed - red) * leds[i].timerIndex / count, green + (nextGreen - green) * leds[i].timerIndex / count, blue + (nextBlue - blue) * leds[i].timerIndex / count));

    if (leds[i].timerIndex > count)
    {
      leds[i].colorIndex++;
      leds[i].timerIndex = 0;
    }
    else
    {
      leds[i].timerIndex++;
    }

    if (leds[i].colorIndex > leds[i].playlistLength-2)
    {
      leds[i].colorIndex = 0;
    }}
    pixels2.show();
    vTaskDelay(1 / portTICK_RATE_MS);
  }
}

void setup()
{
  Serial.begin(115200);

  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  // pinMode(enable1Pin, OUTPUT);
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);

  ledcSetup(0, 800, 8);
  // Attach the PWM signal to GPIO2
  ledcAttachPin(enable1Pin, 0);

  // Set the duty cycle to 2ms (2000 microseconds)
  ledcWrite(0, 0);

  // ledcSetup(pwmChannel1, freq, resolution);
  // digitalWrite(enable1Pin, HIGH);
  // ledcAttachPin(enable1Pin, pwmChannel1);
  // ledcWrite(pwmChannel1, dutyCycle1);

  pixels.begin();
  pixels2.begin();
  pinMode(BUTTON, INPUT_PULLUP);

  xTaskCreate(buttonRead, "buttonRead", 2048 * 1, nullptr, 128 * 10, &TaskHandle_buttonRead);
  xTaskCreate(changeLedState, "changeLedState", 2048 * 1, nullptr, 128 * 1, &TaskHandle_Led);

  Serial.println("Starting BLE work!");

  BLEDevice::init("ESP32 AS A BLE");
  BLEServer *pServer = BLEDevice::createServer();
  BLEService *pService = pServer->createService(SERVICE_UUID);

  BLECharacteristic *pCharacteristic = pService->createCharacteristic(
      CHARACTERISTIC_UUID,
      BLECharacteristic::BLECharacteristic::PROPERTY_READ | BLECharacteristic::PROPERTY_NOTIFY | BLECharacteristic::PROPERTY_WRITE);

  BLECharacteristic *pCharacteristicSpeed = pService->createCharacteristic(
      CHARACTERISTIC_UUID_SPEED,
      BLECharacteristic::BLECharacteristic::PROPERTY_READ | BLECharacteristic::PROPERTY_NOTIFY | BLECharacteristic::PROPERTY_WRITE);
  pCharacteristic->setCallbacks(new MyCallbacks());
  pCharacteristicSpeed->setCallbacks(new MyCallbacksSpeed());
  pCharacteristic->addDescriptor(new BLE2902());
  pCharacteristicSpeed->addDescriptor(new BLE2902());

  pCharacteristic->setValue("Hi,other ESP32 here is your data");
  pCharacteristicSpeed->setValue("Hi,other ESP32 here is your data");
  pService->start();
  // BLEAdvertising *pAdvertising = pServer->getAdvertising();  // this still is working for backward compatibility
  BLEAdvertising *pAdvertising = BLEDevice::getAdvertising();
  pAdvertising->addServiceUUID(SERVICE_UUID);
  pAdvertising->setScanResponse(true);
  pAdvertising->setMinPreferred(0x06);
  pAdvertising->setMinPreferred(0x12);
  BLEDevice::startAdvertising();
  Serial.println("Characteristic defined!");
}

void loop()
{

  if (speed < targetSpeed)
  {
    speed++;
  }
  if (speed > targetSpeed)
  {
    speed--;
  }

  ledcWrite(0, abs(speed));

  if (speed < 0)
  {
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, HIGH);
  }

  if (speed > 0)
  {
    digitalWrite(motor1Pin1, HIGH);
    digitalWrite(motor1Pin2, LOW);
  }

  delay(40);
}
