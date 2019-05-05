/*
  CONNECT DESCRIPTION
  katode to GND
  anodes to some pins (digital or analog)
  for +5V logic you need to add resistor!
*/

// one of anodes and relevant pin
int ledPin1 = 3;
int ledPin2 = 4;
int ledPin3 = 5;

void setup() {
  // set led connected with pins and GND
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
}
