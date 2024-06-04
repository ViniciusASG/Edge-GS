int potPin = A0; // Pino analógico onde o potenciômetro está conectado
int buzzer = 8;  // Pino digital onde o buzzer está conectado

void setup() {
  pinMode(buzzer, OUTPUT); // Configura o pino do buzzer como saída
  Serial.begin(9600); // Inicia a comunicação serial a 9600 bps
}

void loop() {
  int potValue = analogRead(potPin); // Lê o valor do potenciômetro (0-1023)
  float voltage = potValue * (5.0 / 1023.0); // Converte o valor lido em voltagem (0-5V)
  Serial.println(voltage); // Imprime o valor da voltagem no monitor serial

  // Condição simulada baseada na "localização"
  if (voltage > 2.5) { // Simula a condição de uma "localização específica"
    digitalWrite(buzzer, HIGH); // Liga o buzzer
    delay(1000); // Aguarda 1 segundo
    digitalWrite(buzzer, LOW); // Desliga o buzzer
    delay(1000); // Aguarda 1 segundo
  }
}