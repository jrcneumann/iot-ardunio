void setup() {
        Serial.begin(9600);     // set 9600 bps data rate
        pinMode(LED_BUILTIN, OUTPUT); // set onboard LED
}

void loop() {

        int userInput = 1;   // for incoming serial data

        if (Serial.available() > 0) {
                userInput = Serial.read(); // read input data
        
          if (userInput == 49) {
            digitalWrite(LED_BUILTIN, HIGH); // Turn on when "1" is read
            }   
          else if (userInput == 48) {
            digitalWrite(LED_BUILTIN, LOW); // Turn off when "0" is read
            }
          else {
            digitalWrite(LED_BUILTIN, LOW);  
            }
       }
}
