#include <Arduino.h>

#define DEBUG_LEVEL TRACE

#include "colors.h"
#include "debug_level.h"

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  debugClear();
  debugMsg(ERROR, "Loop", "Error");
  debugMsg(WARNING, "Device", "Warning");
  debugMsg(INFO, "Other", "Info");
  debugMsg(DEBUG, "Func", "Debug");
  debugMsg(TRACE, "LED", "Trace");
  debugMsg(TRACE, "LED", "Trace %03d", 10);
  debugMsg(TRACE, "LED", "Trace %0.3f", 3.141516);
  debugMsg(TRACE, "LED", "Trace %s", "hola");

  delay(1000);
}
