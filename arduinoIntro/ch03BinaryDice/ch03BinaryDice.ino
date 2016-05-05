const unsigned int LED_BIT0 = 12;
const unsigned int LED_BIT1 = 11;
const unsigned int LED_BIT2 = 10;
const unsigned int BAUD_RATE = 9600;

void setup() {
  pinMode(LED_BIT0, OUTPUT);
  pinMode(LED_BIT1, OUTPUT);
  pinMode(LED_BIT2, OUTPUT);

  Serial.begin(BAUD_RATE);

  delay(500);

  randomSeed(analogRead(A0));
  long result = random(1, 7);
  output_result(result);
}

void loop() {
}

void output_result(const long result) {
  digitalWrite(LED_BIT0, result & B001);
  digitalWrite(LED_BIT1, result & B010);
  digitalWrite(LED_BIT2, result & B100);

  Serial.print("Random value: ");
  Serial.println( result );
  Serial.print( result & B100 );
  Serial.print( result & B010 );
  Serial.println( result & B001);
}

