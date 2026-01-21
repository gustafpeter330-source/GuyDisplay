#include "User_Setup.h"
#define USER_SETUP_LOADED
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();  // TFT-Objekt

void setup() {
  Serial.begin(115200);
  delay(1000);

  // Display initialisieren
  tft.init();

  // Backlight einschalten
  pinMode(TFT_BL, OUTPUT);
  digitalWrite(TFT_BL, TFT_BACKLIGHT_ON);

  // Rotation optional
  tft.setRotation(1);

  // Bildschirm rot füllen
  tft.fillScreen(TFT_RED);

  // Text anzeigen
  tft.setTextSize(2);
  tft.setTextColor(TFT_WHITE);
  tft.setCursor(20, 50);
  tft.println("ESP32-S3 Test!");
}

void loop() {
  // Nichts im loop – nur statischer Test
}