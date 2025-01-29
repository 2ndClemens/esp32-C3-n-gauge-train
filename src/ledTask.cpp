

#include <Arduino.h>
#include "LedTask.h"

#include "leddata.h"
#include "leddata2.h"
#include "leddata3.h"
#include "leddata4.h"

#include <Adafruit_NeoPixel.h>

#define NUMPIXELS2 10
#define LED2 1

int ledStates = 0b1000000001;

Adafruit_NeoPixel pixels2(NUMPIXELS2, LED2, NEO_GRB + NEO_KHZ800);

struct LedInfo
{
  uint8_t ledNum; // The index number for the LED
  uint8_t colorIndex;
  uint16_t timerIndex;
  const uint8_t (*playlist)[4]; // Pointer to the playlist array
  uint16_t playlistLength;      // Length of the playlist array
};
LedInfo leds[] = {
    {0, 0, 0, brightness3, sizeof(brightness2) / sizeof(brightness3[0])},
    {1, 0, 0, brightness4, sizeof(brightness4) / sizeof(brightness4[0])},
    {2, 0, 0, brightness3, sizeof(brightness3) / sizeof(brightness3[0])},
    {3, 0, 0, brightness4, sizeof(brightness4) / sizeof(brightness4[0])},
    {4, 0, 0, brightness, sizeof(brightness) / sizeof(brightness[0])},
    {5, 0, 0, brightness4, sizeof(brightness4) / sizeof(brightness4[0])},
    {6, 0, 0, brightness4, sizeof(brightness4) / sizeof(brightness4[0])},
    {7, 0, 0, brightness4, sizeof(brightness4) / sizeof(brightness4[0])},
    {8, 0, 0, brightness4, sizeof(brightness4) / sizeof(brightness4[0])},
    {9, 0, 0, brightness4, sizeof(brightness4) / sizeof(brightness4[0])},

};

void setupLedTask()
{
  pixels2.begin();
}

void changeLedState(void *pvParameters)
{
  while (true)
  {
    for (int i = 0; i < NUMPIXELS2; i++)
    {
      // int elements = sizeof(brightness) / sizeof(brightness[0]);

      int count = pgm_read_byte(&(leds[i].playlist[leds[i].colorIndex][0])) * 10;
      int red = pgm_read_byte(&(leds[i].playlist[leds[i].colorIndex][1]));
      int green = pgm_read_byte(&(leds[i].playlist[leds[i].colorIndex][2]));
      int blue = pgm_read_byte(&(leds[i].playlist[leds[i].colorIndex][3]));
      int nextRed = pgm_read_byte(&(leds[i].playlist[leds[i].colorIndex + 1][1]));
      int nextGreen = pgm_read_byte(&(leds[i].playlist[leds[i].colorIndex + 1][2]));
      int nextBlue = pgm_read_byte(&(leds[i].playlist[leds[i].colorIndex + 1][3]));

      if (bitRead(ledStates, i))
      {
        pixels2.setPixelColor(leds[i].ledNum, pixels2.Color(red + (nextRed - red) * leds[i].timerIndex / count, green + (nextGreen - green) * leds[i].timerIndex / count, blue + (nextBlue - blue) * leds[i].timerIndex / count));
      }else{
         pixels2.setPixelColor(leds[i].ledNum, 0, 0, 0);
      }
      if (leds[i].timerIndex > count)
      {
        leds[i].colorIndex++;
        leds[i].timerIndex = 0;
      }
      else
      {
        leds[i].timerIndex++;
      }

      if (leds[i].colorIndex > leds[i].playlistLength - 2)
      {
        leds[i].colorIndex = 0;
      }
    }
    pixels2.show();
    vTaskDelay(1 / portTICK_RATE_MS);
  }
}