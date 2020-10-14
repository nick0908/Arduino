#include <Servo.h>

Servo sv;
void setup() {
  sv.attach(3);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      

}

void loop() {
        //초기식 조건식 증감식
  for(int i = 0; i < 5; i++)
  {
    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(9, LOW);
    delay(500);
  }
  for(int i = 0; i < 5; i++)
  {
    digitalWrite(10, HIGH);
    delay(500);
    digitalWrite(10, LOW);
    delay(500);
  }
}
