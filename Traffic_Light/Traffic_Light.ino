int greenLed = 10;
int redLed = 11;
int button = 12;
boolean greenState;
int startTime;

int const buttonDelay = 10;
void setup() {
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(button, INPUT);
  greenState = true;
  digitalWrite(greenLed, HIGH);
  startTime = millis();

}

void loop() {
  int endTime =  millis();

  if (buttonPushed(button)) {
    reverseStates();
  }

  if (endTime - startTime >= 2000) {
    reverseStates();
  }
}

void reverseStates() {
  digitalWrite(greenLed, !greenState);
  digitalWrite(greenLed, greenState);
  greenState = !greenState;

  startTime = millis();
}

boolean buttonPushed(int button) {
  boolean currentState;
  boolean previousState;

  previousState = digitalRead(button);

  for(int counter = 0; counter < buttonDelay; counter++) {
    delay(1);
    currentState = digitalRead(button);
    if (currentState != previousState) {
      counter = 0;
      previousState = currentState;
    }
  }
  return currentState;
}
