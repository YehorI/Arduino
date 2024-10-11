int ledPin = 10; // define digital pin 10.

void setup() {
  pinMode(ledPin, OUTPUT); // define pin with LED connected as output.
}

void loop() {
  digitalWrite(ledPin, HIGH); // set the LED on.
  delay(200); // wait for a second.
  digitalWrite(ledPin, LOW); // set the LED off.
  delay(100); // wait for a second
}