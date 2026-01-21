// ======================================================
// User_Setup.h
// ESP32-S3 + ST7789 240x240 TFT Setup
// ======================================================

#define ST7789_DRIVER      // ST7789 Treiber

#define TFT_WIDTH  240
#define TFT_HEIGHT 320

// SPI Pins - an dein Modul anpassen!
#define TFT_MOSI  11
#define TFT_SCLK  12
#define TFT_MISO  -1        // Nicht verwendet
#define TFT_CS    10
#define TFT_DC    9
#define TFT_RST   14

#define TFT_BL     48         // Backlight Pin
#define TFT_BACKLIGHT_ON HIGH

#define SPI_FREQUENCY 10000000  // 10 MHz

// Optional: Displayinvertierung
//#define TFT_INVERSION_ON

// Optional: fixe Drehung (0-3)
//#define TFT_ROTATION 1
