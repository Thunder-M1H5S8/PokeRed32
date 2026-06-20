#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
    Serial.begin(115200);

    tft.init();
    tft.setRotation(1);

    tft.fillScreen(TFT_BLACK);

    tft.setTextColor(TFT_GREEN);
    tft.setTextSize(2);

    tft.drawString("PokeRed32", 20, 20);

    tft.drawRect(10, 10, 200, 100, TFT_RED);

    Serial.printf("Width: %d\n", tft.width());
    Serial.printf("Height: %d\n", tft.height());
}

void loop() {
}