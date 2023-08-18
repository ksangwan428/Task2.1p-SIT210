int led1 = LED_BUILTIN;

int buttonPin = 2; // Push button for resetting the name
bool isButtonPressed = false;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(buttonPin), resetName, FALLING);
}

void loop() 
{
  if (isButtonPressed) {
    resetName();
    isButtonPressed = false;
  }

  // K
  blinkDot(); delay(500);
  blinkDash(); delay(500);
  blinkDot(); delay(500);
  blinkDash(); delay(500);
  blinkDot(); delay(1000);

  // a
  blinkDot(); delay(500);
  blinkDash(); delay(1000);

  // r
  blinkDot(); delay(500);
  blinkDash(); delay(500);
  blinkDot(); delay(500);
  blinkDot(); delay(500);

  // t
  blinkDash(); delay(1000);

  // i
  blinkDot(); delay(1000);

  // k
  blinkDot(); delay(500);
  blinkDash(); delay(500);
  blinkDot(); delay(1000);

  delay(2000);  // Gap between words
}

void blinkDot() {
  digitalWrite(led1, HIGH);
  delay(200);
  digitalWrite(led1, LOW);
  delay(200);
}

void blinkDash() {
  digitalWrite(led1, HIGH);
  delay(600);
  digitalWrite(led1, LOW);
  delay(200);
}

void resetName() {
  // Reset the name display here
  digitalWrite(led1, LOW);
  delay(1000);
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
}
