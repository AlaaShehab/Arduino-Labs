int alarm = 13;
int temp_sensor = 0;
void setup() {
  pinMode(alarm, OUTPUT);
  pinMode(temp_sensor, INPUT);
  Serial.begin(9600);

}

void loop() {
  int value = analogRead(temp_sensor);
 float volt = (value * 5.0)/1024.0;
 float celsius = (volt) * 100.0;
  Serial.println(celsius);

  if (celsius >= 30) {
    digitalWrite(alarm, HIGH);
  }
  
  if (celsius < 28) {
    digitalWrite(alarm, LOW);
  }
}
