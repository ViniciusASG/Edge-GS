# Edge-GS
#Integrantes do Projeto
# Vinicius Augusto RM 557065
# João Pedro RM 558375
# 1-ESPW
#
# A nossa solução seria um robo de coleta de dados para remoção dos lixos. Ele utilizaria um sistema de geolocalização por arduino e um sistema de ondas sonoras para caso haja perca de sinal. O robo teria placas de energia  # solar para recarga de energia de maneira sustentável.A partir de coordenadas e locais provaveis de haver lixo, o robo iria verificar se ha a presença de lixo na localização, e enviaria as informações se ha lixo ou nao.    # Fariamos um site compartilhando essas informações, e alguns sistemas adicionais, como por exemplo, a comparação de lugares e suas respectivas quantidades de lixos.
#
# Buzzer
# Negativo (GND): Este terminal deve ser conectado ao GND do Arduino.
# Positivo (VCC): Este terminal deve ser conectado a um pino digital do Arduino.
# Se você está utilizando os pinos 13 e 8, então a ligação correta seria:
#
# Negativo (GND) do Buzzer no pino 13 do Arduino.
# Positivo (VCC) do Buzzer no pino 8 do Arduino.
# Potenciômetro
# Um potenciômetro tem três terminais:
#
# Terminal 1 (geralmente 5V)
# Terminal 2 (o pino central, que é a saída variável)
# Terminal 3 (GND)
#
# Declarações de Variáveis
# cpp
# Copy code
# int potPin = A0; // Pino analógico onde o potenciômetro está conectado
# int buzzer = 8;  // Pino digital onde o buzzer está conectado
# Aqui, são declaradas duas variáveis globais:
#
# potPin é configurado para o pino analógico A0, onde o potenciômetro está conectado.
# buzzer é configurado para o pino digital 8, onde o buzzer está conectado.
# Função setup()
# cpp
# Copy code
# void setup() {
#  pinMode(buzzer, OUTPUT); // Configura o pino do buzzer como saída
#  Serial.begin(9600); // Inicia a comunicação serial a 9600 bps
# }
# A função setup() é executada uma vez quando o Arduino é ligado ou resetado:
#
# pinMode(buzzer, OUTPUT) configura o pino do buzzer como saída, permitindo que o Arduino controle o buzzer.
# Serial.begin(9600) inicia a comunicação serial com uma taxa de 9600 bits por segundo (bps), permitindo enviar dados para o computador.
# Função loop()
# cpp
# Copy code
# void loop() {
#  int potValue = analogRead(potPin); // Lê o valor do potenciômetro (0-1023)
#  float voltage = potValue * (5.0 / 1023.0); // Converte o valor lido em voltagem (0-5V)
#  Serial.println(voltage); // Imprime o valor da voltagem no monitor serial
#
# // Condição simulada baseada na "localização"
#  if (voltage > 2.5) { // Simula a condição de uma "localização específica"
#    digitalWrite(buzzer, HIGH); // Liga o buzzer
#    delay(1000); // Aguarda 1 segundo
#    digitalWrite(buzzer, LOW); // Desliga o buzzer
#    delay(1000); // Aguarda 1 segundo
#  }
# }
# A função loop() é executada continuamente em um ciclo:
#
# int potValue = analogRead(potPin); lê o valor analógico do potenciômetro, que varia de 0 a 1023.
# float voltage = potValue * (5.0 / 1023.0); converte o valor lido em uma voltagem correspondente de 0 a 5 volts.
# Serial.println(voltage); envia o valor da voltagem para o monitor serial, permitindo que você veja o valor lido no computador.
# Condição para Acionar o Buzzer
# cpp
# Copy code
# if (voltage > 2.5) { // Simula a condição de uma "localização específica"
#  digitalWrite(buzzer, HIGH); // Liga o buzzer
#  delay(1000); // Aguarda 1 segundo
#  digitalWrite(buzzer, LOW); // Desliga o buzzer
#  delay(1000); // Aguarda 1 segundo
# }
# Se a voltagem lida for maior que 2.5V, o buzzer será ligado (digitalWrite(buzzer, HIGH)), permanecerá ligado por 1 segundo (delay(1000)), será desligado (digitalWrite(buzzer, LOW)) e permanecerá desligado por 1 segundo # (delay(1000)).
# Em resumo, o programa lê continuamente o valor de um potenciômetro, converte esse valor em voltagem e ativa um buzzer se a voltagem exceder 2.5 volts, criando um som intermitente (1 segundo ligado, 1 segundo desligado) # quando essa condição é atendida.
