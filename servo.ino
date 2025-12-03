#include <ESP32Servo.h>
#include <Wire.h>
#include "esp_sleep.h"

Servo motor1; // Utilize isso para definir o servo

void setup() {
Serial.begin(115200);
  
motor1.attach(33); // Define o pino do servo

}

void loop(){
motor1.write(value); // Gira o servo de acordo com o valor
  
}
