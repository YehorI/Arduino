int buzzer = 8; // Select digital IO pin for the buzzer

void setup() { 
    pinMode(buzzer, OUTPUT); // Set digital IO pin as OUTPUT
}

void loop() {
    unsigned char i, j; // Define variable
    
    while (1) {
        for (i = 0; i < 80; i++) { // Output a frequency sound
            digitalWrite(buzzer, HIGH); // Sound
            delay(1); // Delay 1ms
            digitalWrite(buzzer, LOW); // Not sound
            delay(1); // 1ms delay
        }

        for (i = 0; i < 100; i++) { // Output a frequency sound
            digitalWrite(buzzer, HIGH); // Sound
            delay(2); // 2ms delay
            digitalWrite(buzzer, LOW); // Not sound
            delay(2); // 2ms delay
        }
    }
}
