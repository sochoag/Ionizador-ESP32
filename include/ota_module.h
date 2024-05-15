#ifndef OTA_MODULE
#define OTA_MODULE

#include <WiFi.h>
#include <ESPmDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>

const char *ssid = WIFI_SSID;
const char *password = WIFI_PASS;

void OTAsetup()
{
  debugMsg(DEBUG, "OTA", "Booting");
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.waitForConnectResult() != WL_CONNECTED)
  {
    Serial.println("Connection Failed! Rebooting...");
    delay(5000);
    ESP.restart();
  }

  // ArduinoOTA.setPort(3232); // * Port defaults to 3232
  ArduinoOTA.setHostname("Ionizer"); // * Hostname defaults to esp3232-[MAC]

  // ArduinoOTA.setPassword("password"); // * No authentication by default
  // ArduinoOTA.setPasswordHash("424ea8c7cf6c544f2ad23fd626bc3e5c"); // * Password can be set with it's md5 value as well

  ArduinoOTA
      .onStart([]()
               {
    String type;
    if (ArduinoOTA.getCommand() == U_FLASH)
      type = "sketch";
    else // U_SPIFFS
      type = "filesystem";
    // NOTE: if updating SPIFFS this would be the place to unmount SPIFFS using SPIFFS.end()
    debugMsg(INFO, "OTA", "Start updating %s", type); })
      .onEnd([]()
             { debugMsg(INFO, "OTA", "\nEnd"); })
      .onProgress([](unsigned int progress, unsigned int total)
                  { Serial.printf("Progress: %u%%\r", (progress / (total / 100))); })
      .onError([](ota_error_t error)
               {
    Serial.printf("Error[%u]: ", error);
    if (error == OTA_AUTH_ERROR)
    {
      debugMsg(ERROR, "OTA", "Auth Failed");
    }
    else if (error == OTA_BEGIN_ERROR)
    {
      debugMsg(ERROR, "OTA", "Begin Failed");
    }
    else if (error == OTA_CONNECT_ERROR)
    {
      debugMsg(ERROR, "OTA", "Connect Failed");
    }
    else if (error == OTA_RECEIVE_ERROR)
    {
      debugMsg(ERROR, "OTA", "Receive Failed");
    }
    else if (error == OTA_END_ERROR)
    {
      debugMsg(ERROR, "OTA", "End Failed");
    } });

  ArduinoOTA.begin();
  debugMsg(DEBUG, "OTA", "IP Address: %s", WiFi.localIP().toString().c_str());
}

void OTAloop()
{
  ArduinoOTA.handle();
}

#endif