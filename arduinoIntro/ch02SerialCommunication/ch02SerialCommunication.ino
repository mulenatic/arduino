const unsigned int LED_PIN = 13;
const unsigned int BAUD_RATE = 9600;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(BAUD_RATE);

}

void loop() {
  if (Serial.available() > 0) {
    int command = Serial.read();
    switch (command) {
      case '1':
        digitalWrite(LED_PIN, HIGH);
        Serial.println("LED on");
        break;
      case '2':
        digitalWrite(LED_PIN, LOW);
        Serial.println("LED off");
        break;
      case '3':
        Serial.println("LED blinking");
        for ( int i = 0; i < 10; i++ ) {
          digitalWrite(LED_PIN, HIGH);
          delay(100);
          digitalWrite(LED_PIN, LOW);
          delay(100);
        }
        break;
      default:
        Serial.print("Unknown commad: ");
        Serial.println(command);
        break;
    }
  }

}
