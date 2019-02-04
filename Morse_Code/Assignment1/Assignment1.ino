
const int ledPin =  LED_BUILTIN;
const int buzzer =  11;


void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {
  String msg = Serial.readString();
  Serial.print(msg);
  for (int i = 0; i < msg.length(); i++) {
    if (msg.charAt(i) == ' ') {
      delay(700);
      continue;
    }
    delay(300);
    disp(msg.charAt(i));
  }
}

void dot() {
  digitalWrite(ledPin, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(ledPin, LOW);
  digitalWrite(buzzer, LOW);
} 

void dash() {
  digitalWrite(ledPin, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(300);
  digitalWrite(ledPin, LOW);
  digitalWrite(buzzer, LOW);
}


void disp(char letter) {
  switch (letter) {
       case 'A':
        dot();
        delay(100);
        dash();
      break;
       case 'B':
        dash();
        delay(100);
        dot();
        delay(100);
        dot();
        delay(100);
        dot();
      break;
       case 'C':
        dash();
        delay(100);
        dot();
        delay(100);
        dash();
        delay(100);
        dot();
      break;
       case 'D':
        dash();
        delay(100);
        dot();
        delay(100);
        dot();
      break;
       case 'E':
        dot();
      break;
       case 'F':
        dot();
        delay(100);
        dot();
        delay(100);
        dash();
        delay(100);
        dot();
      break;
       case 'G':
        dash();
        delay(100);
        dash();
        delay(100);
        dot();
      break;
       case 'H':
        dot();
        delay(100);
        dot();
        delay(100);
        dot();
        delay(100);
        dot();
      break;
       case 'I':
        dot();
        delay(100);
        dot();
      break;
       case 'J':
        dot();
        delay(100);
        dash();
        delay(100);
        dash();
        delay(100);
        dash();
      break;
       case 'K':
        dash();
        delay(100);
        dot();
        delay(100);
        dash();
      break;
       case 'L':
        dot();
        delay(100);
        dash();
        delay(100);
        dot();
        delay(100);
        dot();
      break;
       case 'M':
        dash();
        delay(100);
        dash();
      break;
       case 'N':
        dash();
        delay(100);
        dot();
      break;
       case 'O':
        dash();
        delay(100);
        dash();
        delay(100);
        dash();
      break;
       case 'P':
        dot();
        delay(100);
        dash();
        delay(100);
        dash();
        delay(100);
        dot();
      break;
       case 'Q':
        dash();
        delay(100);
        dash();
        delay(100);
        dot();
        delay(100);
        dash();
      break;
       case 'R':
        dot();
        delay(100);
        dash();
        delay(100);
        dot();
      break;
       case 'S':
      dot();
        delay(100);
      dot();
        delay(100);
      dot();
        delay(100);
      break;
       case 'T':
      dash();
      break;
       case 'U':
      dot();
    delay(100);
    dot();
    delay(100);
    dash();
      break;
       case 'V':
      dot();
    delay(100);
    dot();
    delay(100);
    dot();
    delay(100);
    dash();
      break;
       case 'W':
      dot();
    delay(100);
    dash();
    delay(100);
    dash();
      break;
       case 'X':
      dash();
    delay(100);
    dot();
    delay(100);
    dot();
    delay(100);
    dash();
      break;
       case 'Y':
      dash();
    delay(100);
    dot();
    delay(100);
    dash();
    delay(100);
    dash();
      break;
       case 'Z':
      dash();
    delay(100);
    dash();
    delay(100);
    dot();
    delay(100);
    dot();
      break;
       case '0':
      dash();
    delay(100);
    dash();
    delay(100);
    dash();
    delay(100);
    dash();
    delay(100);
    dash();
      break;
       case '1':
      dot();
      delay(100);
    dash();
    delay(100);
    dash();
    delay(100);
    dash();
    delay(100);
    dash();
      break;
       case '2':
      dot();
      delay(100);
      dot();
    delay(100);
    dash();
    delay(100);
    dash();
    delay(100);
    dash();
      break;
       case '3':
      dot();
    delay(100);
    dot();
    delay(100);
    dot();
    delay(100);
    dash();
    delay(100);
    dash();
      break;
       case '4':
      dot();
      delay(100);
      dot();
    delay(100);
    dot();
    delay(100);
    dot();
    delay(100);
    dash();
      break;
       case '5':
      dot();
      delay(100);
    dot();
      delay(100);
    dot();
      delay(100);
    dot();
      delay(100);
    dot();
      break;
       case '6':
      dash();
      delay(100);
      dot();
      delay(100);
      dot();
      delay(100);
      dot();
      delay(100);
      dot();
      break;
       case '7':
      dash();
      delay(100);
      dash();
    delay(100);
    dot();
    delay(100);
    dot();
    delay(100);
    dot();
      break;
       case '8':
       dash();
     delay(100);
     dash();
     delay(100);
     dash();
     delay(100);
     dot();
     delay(100);
     dot();
      break;
       case '9':
     dash();
     delay(100);
     dash();
     delay(100);
     dash();
     delay(100);
     dash();
     delay(100);
     dot();
      break;
       default:
      break;
  }
}
