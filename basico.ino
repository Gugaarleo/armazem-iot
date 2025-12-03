const int ledPin = 2; // Define pinos no ESP

/* INFORMAÇÕES IMPORTANTES:
No Arduino IDE:
Selecione a placa: ESP32 S3 DEVMODULE
Selecione a porta
*/

/* PINOS RECOMENDADOS ESP32 S3:
Analógicos:
1, 4, 5, 10, 15, 17, 18, 21, 45, 47, 
Digitais:

*/


void setup() {
  Serial.begin(115200); // Obrigatorio
  pinMode(ledPin, OUTPUT); // INPUT para leitores, OUTPUT para saidas
  
  digitalWrite(ledPin, LOW); 
  digitalRead(Componente); // Leitura de componentes digitais
  analogRead(Componente); // Leitura de componentes analogicos
  analogWrite(Componente, Valor); // Escrita para componentes analogicos

  Serial.print("Hello world!");
}

void loop() {
  delay(2000);
  Serial.println("Hello world!");
}
