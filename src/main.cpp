#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    delay(1000);

    Serial.println();
    Serial.println("=== PokeRed32 ===");
    Serial.println("ESP32 Boot Successful");
}

void loop() {
    static uint32_t last = 0;

    if (millis() - last > 1000) {
        last = millis();
        Serial.println("Running...");
    }
}