#include <Arduino.h>

#define DEBUG_LEVEL TRACE

#include "debug_module.h"
#include "ota_module.h"

void setup()
{
  OTAsetup();
  Serial.begin(115200);
}

void loop()
{
  OTAloop();
  debugClear();
  debugMsg(ERROR, "Loop", "Error");
  debugMsg(WARNING, "Device", "Warning");
  debugMsg(INFO, "Other", "Info");
  debugMsg(DEBUG, "Func", "Debug");
  debugMsg(TRACE, "LED", "Trace");

  delay(1000);
}
