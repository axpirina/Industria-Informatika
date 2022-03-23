/* Example sketch to read analog sensor from Arduino Serial port
  This code is licensed under a Creative Commons Attribution 4.0 International license.
  created by Axpi 2022
*/
#include <TimerOne.h>

int A_sentsorea;
int B_sentsorea;

int aurrekoa_A_sentsorea;
int aurrekoa_B_sentsorea;

int diffA;
int diffB;

int mappA;
int mappB;

long previousMillis = 0;
long intervalOff = 10000;

void setup() {
  Serial.begin(1200);
  aurrekoa_A_sentsorea = 0;
  aurrekoa_B_sentsorea = 0;
  Timer1.initialize(10000000);      //Tenporizadorea 1sg
  Timer1.attachInterrupt(Tenporizatzailea) ; //Interrupzioa konfiguratu

}
void loop() {

  A_sentsorea = analogRead(0); //  1 sentsorea irakurri
  B_sentsorea = analogRead(1); //  2 sentsorea irakurri
  //Serial.println(A_sentsorea);
  //Serial.println(aurrekoa_A_sentsorea);

  diffA = abs(A_sentsorea - aurrekoa_A_sentsorea);
  diffB = abs(B_sentsorea - aurrekoa_B_sentsorea);
  //Serial.println(diffA);

  if (diffA > 200) {
    mappA = map(A_sentsorea, 0, 1023, 0, 100);
    Serial.print(mappA);
    Serial.println("");
    aurrekoa_A_sentsorea = A_sentsorea;
    //delay(150);
  }

  if (diffB > 200) {
    mappB = map(B_sentsorea, 0, 1023, 100, 200);
    Serial.print(mappB);
    Serial.println("");
    aurrekoa_B_sentsorea = B_sentsorea;
    //delay(150);
  }

}

void Tenporizatzailea (void)
{ mappA = map(A_sentsorea, 0, 1023, 0, 100);
  Serial.print(mappA);
  Serial.println("");
  mappB = map(B_sentsorea, 0, 1023, 100, 200);
  Serial.print(mappB);
  Serial.println("");
  interrupts();
}
