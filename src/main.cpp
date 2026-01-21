#include <TFT_eSPI.h>  // Bibliothek für ST7789

// TFT Objekt erstellen
TFT_eSPI tft = TFT_eSPI();  // Default Pins aus User_Setup.h

void setup() {
  Serial.begin(115200);
  delay(1000); // kurz warten, damit Monitor bereit ist

  Serial.println("TFT Test gestartet...");

  // Display initialisieren
  tft.init();
  tft.setRotation(1); // optional: 0-3
  tft.fillScreen(TFT_BLACK);

  // Testtext anzeigen
  tft.setTextSize(2);
  tft.setTextColor(TFT_WHITE);
  tft.setCursor(10, 10);
  tft.println("ESP32-S3 TFT Test");

  // Farbblöcke zeichnen
  int blockHeight = tft.height() / 6;
  tft.fillRect(0, 30, tft.width(), blockHeight, TFT_RED);
  tft.fillRect(0, 30 + blockHeight, tft.width(), blockHeight, TFT_GREEN);
  tft.fillRect(0, 30 + 2*blockHeight, tft.width(), blockHeight, TFT_BLUE);
  tft.fillRect(0, 30 + 3*blockHeight, tft.width(), blockHeight, TFT_YELLOW);
  tft.fillRect(0, 30 + 4*blockHeight, tft.width(), blockHeight, TFT_CYAN);
  tft.fillRect(0, 30 + 5*blockHeight, tft.width(), blockHeight, TFT_MAGENTA);
}

void loop() {
  // optional: animierter Farbwechsel
  static int colorIndex = 0;
  uint16_t colors[] = {TFT_RED, TFT_GREEN, TFT_BLUE, TFT_YELLOW, TFT_CYAN, TFT_MAGENTA, TFT_WHITE};
  tft.fillRect(0, tft.height() - 20, tft.width(), 20, colors[colorIndex]);
  colorIndex = (colorIndex + 1) % 7;
  delay(500);
}
