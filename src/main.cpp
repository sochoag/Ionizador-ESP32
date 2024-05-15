#include <Arduino.h>

#define DEBUG_LEVEL TRACE

#include "colors.h"
#include "debug_level.h"
#include "ota_module.h"

void setup()
{
  Serial.begin(115200);
  OTAsetup();
}

void loop()
{
  OTAloop();
}
