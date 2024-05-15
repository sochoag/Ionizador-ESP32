#include <Arduino.h>

#define DEBUG_LEVEL TRACE

#include "colors.h"
#include "debug_level.h"

void setup()
{
  Serial.begin(115200);
  OTAsetup();
}

void loop()
{
  OTAloop();
  // debugClear();
  // debugMsg(ERROR, "Loop", "Error");
  // debugMsg(WARNING, "Device", "Warning");
  // debugMsg(INFO, "Other", "Info");
  // debugMsg(DEBUG, "Func", "Debug");
  // debugMsg(TRACE, "LED", "Trace");

  // delay(1000);
}
