int buttonPin = 12; // Arduino pin the button is connected to
int whiteLEDPin = 0; // white LED Pin
int blueLEDPin = 1;
int redLEDPin = 2;
int greenLEDPin = 3;

int buttonState = 0;

int ledSwitch = 1;


void setup() {
  // Set button as an input
  pinMode(buttonPin, INPUT);
  // Set LED as an output
  pinMode(whiteLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);
  // Use Arduinos internal pull-up resistor
  digitalWrite(buttonPin, HIGH);

}

void loop() {
  // Read button value on Arduino
  buttonState = digitalRead(buttonPin);
  // Conditional if statement
  if ( buttonState == LOW ) {
    for ( int i = 0; i <= 3; i++ ) {
      digitalWrite(i, HIGH);
      delay(500);
      digitalWrite(i, LOW);
    }
  }

}
