int potpin=0;// initialize analog pin 0, connected with photovaristor
int ledpin=11;// initialize digital pin 11, 
int val=0;// initialize variable va
void setup()
{
    pinMode(ledpin,OUTPUT);// set digital pin 11 as “output”
    Serial.begin(9600);// set baud rate at “9600”
}
void loop()
{
    val=analogRead(potpin);// read the value of the sensor and assign it to val
    val = max(0, min(255, map(val, 200, 700, 0, 255)));
    Serial.println(val);// display the value of val
    analogWrite(ledpin,val);// set up brightness（maximum value 255）
    delay(10);// wait for 0.01 
}
