void setup() {
  Serial.begin(9600);
  delay(1000);  // Wait for serial to initialize
  Serial.println("Arduino is ready");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello World!");
  delay(1000);
}
