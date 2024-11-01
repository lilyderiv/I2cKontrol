#include <Wire.h>

void setup() {
    Serial.begin(115200);
    Wire.begin();
    Serial.println("I2C cihazları taranıyor...");
    
    for (byte address = 1; address < 127; address++) {
        Wire.beginTransmission(address);
        if (Wire.endTransmission() == 0) {
            Serial.print("I2C cihaz bulundu: 0x");
            Serial.println(address, HEX);
        }
    }
    Serial.println("Tarama tamamlandı.");
}

void loop() {
    // boş
}
