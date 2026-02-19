/**
 * @file main.cpp
 * @brief Embedded Force Measurement System using FSR
 * @author Praveen Kumar Sharma [Praveen2005Op]
 * @date 19-02-2026
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor
 */

#include <Arduino.h>
int value=0;
void setup() {
    // write your initialization code here
    Serial.begin(9600);
    pinMode(A0, INPUT);
}

void loop() {
    // write your code here
    value = analogRead(A0);
    Serial.println(value);
    delay(500);
}