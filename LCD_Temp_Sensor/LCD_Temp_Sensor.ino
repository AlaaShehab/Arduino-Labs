#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int alarm = 13;
const int temp_sensor = 0;
void setup() {
  pinMode(alarm, OUTPUT);
  pinMode(temp_sensor, INPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);

}

void loop() {
 int value = analogRead(temp_sensor);
 float volt = (value * 5.0)/1024.0;
 float celsius = (volt) * 100.0;

  if (celsius >= 30) {
    digitalWrite(alarm, HIGH);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("WARNING!!");
    lcd.setCursor(1, 0);
    lcd.print("High Temperature");
     Serial.println(celsius);
  } else {
     lcd.clear();
     lcd.setCursor(0, 0);
     lcd.print("Temp         C  ");
    lcd.setCursor(6, 0);
    lcd.print(celsius);
    Serial.println(celsius);
    
      if (celsius < 28) {
    digitalWrite(alarm, LOW);
  }
  
  
  }
}
