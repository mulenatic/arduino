int buttonPin = 12; // Arduino pin the button is connected to
int LEDPin = 6; // Arduino pin the LED is connected to

int buttonState = 0;

int ledSwitch = 0;


void setup() {
  // Set button as an input
  pinMode(buttonPin, INPUT);
  // Set LED as an output
  pinMode(LEDPin, OUTPUT);
  // Use Arduinos internal pull-up resistor
  digitalWrite(buttonPin, HIGH);

}

void loop() {
  // Read button value on Arduino
  buttonState = digitalRead(buttonPin);
  // Conditional if statement
  if ( buttonState == LOW ) {
    // Change led mode
    ledSwitch = ledSwitch == 0 ? 1 : 0;
  }

  digitalWrite(LEDPin, ledSwitch);

}
