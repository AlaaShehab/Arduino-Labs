#include <IRremote.h>

const int RECV_PIN = 7;
int count = 0;
int num1;
int num2;
IRrecv irrecv(RECV_PIN);
decode_results results;
unsigned long key_value = 0;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
}

void loop(){
  if (irrecv.decode(&results)){
 
        if (results.value == 0XFFFFFFFF)
          results.value = key_value;

        switch(results.value){              
          case 0x205D58A7:
          //add button
          count = 1;
          break ;  
          case 0x205DE01F:
          //equal button
          count = 0;
          Serial.print(num1);
          Serial.print(" + ");
          Serial.print(num2);
          Serial.print(" = ");
          Serial.println(num1 + num2);
          break ;  
          case 0x205D906F:
          if (count == 0) {
            num1 = 1;
            count = 1;
            } else {
              num2 = 1;
              }
          Serial.println(1);
          break ;
          case 0x205DB847:
          if (count == 0) {
            num1 = 2;
            } else {
              num2 = 2;
              }
          Serial.println(2);
          break ;
          case 0x205DF807:
          if (count == 0) {
            num1 = 3;
            } else {
              num2 = 3;
              }
          Serial.println(3);
          break ;
          case 0x205DB04F:
          if (count == 0) {
            num1 = 4;
            } else {
              num2 = 4;
              }
          Serial.println(4);
          break ;
          case 0x205D9867:
          if (count == 0) {
            num1 = 5;
            } else {
              num2 = 5;
              }
          Serial.println(5);
          break ;
          case 0x205DD827:
          if (count == 0) {
            num1 = 6;
            } else {
              num2 = 6;
              }
          Serial.println(6);
          break ;
          case 0x205D8877:
          if (count == 0) {
            num1 = 7;
            } else {
              num2 = 7;
              }
          Serial.println(7);
          break ;
          case 0x205DA857:
          if (count == 0) {
            num1 = 8;
            } else {
              num2 = 8;
              }
          Serial.println(8);
          break ;
          case 0x205DE817:
          if (count == 0) {
            num1 = 9;
            } else {
              num2 = 9;
              }
          Serial.println(9);
          break ;      
        }
        key_value = results.value;
        irrecv.resume(); 
  }
}

