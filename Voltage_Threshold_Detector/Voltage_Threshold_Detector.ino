int voltInPin = A0;
int buzzerPin = 13;

const int referenceVolt = 5;
const float maxValue = 1023.0;
void setup() {
  pinMode(voltInPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int valueRead = analogRead(voltInPin);
  float volt = (valueRead / maxValue) * referenceVolt;

  Serial.println(volt);

  if (volt >= 3) {
    digitalWrite(buzzerPin, HIGH);
  }

  if (volt <= 2.5) {
    digitalWrite(buzzerPin, LOW);
  }
}
