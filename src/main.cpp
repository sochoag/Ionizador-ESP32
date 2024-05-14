#include <Arduino.h>

#define DEBUG_LEVEL DEBUG

#include "debug_level.h"

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  debugMsg(ERROR, "Loop", "Error");
  debugMsg(WARNING, "Loop", "Warning");
  debugMsg(MESSAGE, "Loop", "Message");
  debugMsg(INFO, "Loop", "Info");
  debugMsg(DEBUG, "Loop", "Debug");

  delay(1000);
}