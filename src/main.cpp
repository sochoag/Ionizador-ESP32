#include <Arduino.h>

#define DEBUG_L 1

#include "debug_level.h"

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  printMessage("Este es un mensaje de prueba\n");
  printError("¡Esto es un error!\n");
  printWarning("Advertencia: ¡Ten cuidado!\n");
  printInfo("Información importante.\n");
  printDebug("Debugging...\n");

  delay(1000);
}