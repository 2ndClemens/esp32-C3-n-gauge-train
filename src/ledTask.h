#ifndef LED_TASK_H
#define LED_TASK_H


void setupLedTask();           // Declaration for the LED setup function
// Function prototype for changeLedState
void changeLedState(void *pvParameters);

#endif // LED_TASK_H