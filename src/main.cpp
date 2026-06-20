#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
    Serial.begin(115200);

    Serial.println("Starting TFT...");

    tft.init();
    tft.setRotation(1);

    tft.fillScreen(TFT_RED);
}

void loop() {
}