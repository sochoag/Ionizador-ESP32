#include <Arduino.h>

#define DEBUG_LEVEL TRACE

#include "colors.h"
#include "debug_module.h"
#include "ota_module.h"

void setup()
{
  OTAsetup();
  Serial.begin(115200);
  OTAsetup();
}

void loop()
{
  OTAloop();
}
