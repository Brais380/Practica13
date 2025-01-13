/* 
Esta practica consistia en condicionar el funcionamiento de 
una secuencia de pilotos anteriormente echa en practicas mediante
un pulsador que bloque su funcionamiento; Cuando el pulsador este 
desactivado el sistema funciona con normalidad segun la secuencia 
programada, en caso de que se pulse este inabilita o sistema.

Autor: Brais Rey Mirón
Fecha: 13 / Enero / 2025
*/

#define LED_A 13
#define LED_V 12
#define RELE  11
#define PULS  10

bool pulsador = 0;
int tempo = 4000; 

void setup() {
  pinMode(LED_A, OUTPUT);
  pinMode(LED_V, OUTPUT);
  pinMode(RELE, OUTPUT);
  pinMode(PULS, INPUT);
}

void loop() {
  pulsador = digitalRead(PULS);
  if (pulsador != 1) { // Condicion (SI) para activar
  leds_on();
 }
}
void leds_on() {
   digitalWrite(LED_A, HIGH); // Activación led amarillo
   delay(tempo); // Espera por 4000 milisegundo(s)
   digitalWrite(LED_A, LOW); // Desactivación led amarillo
   delay(tempo/2); // Espera por 2000 milisegundomilisegundo(s)
   digitalWrite(RELE, HIGH); // Activación rele
   digitalWrite(LED_V, HIGH); // Activación led verde
   delay(tempo); // Espera por 4000 milisegundo(s)
   digitalWrite(RELE, LOW); // Desactivación rele
   digitalWrite(LED_V, LOW); // Desactivación led verde
   delay(tempo/2); // Espera por 2000 milisegundo(s)
}
