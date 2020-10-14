#include <Servo.h>
Servo sv;
void setup() {
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, INPUT);
  pinMode(7, INPUT);
  sv.attach(3);
}

void loop() {
  if(digitalRead(7) == HIGH)
  {
    for(int i = 0; i < 5; i++)
    {
      digitalWrite(9, HIGH);
      sv.write(90);
      delay(500);
      digitalWrite(9, LOW);
      sv.write(0);
      delay(500); 
    }
  }
  else if(digitalRead(8) == HIGH)
  {
    for(int i = 0; i < 5; i++)
    {
      digitalWrite(11, HIGH);
      sv.write(180);
      delay(500);
      digitalWrite(11, LOW);
      sv.write(90);
      delay(500);
    }
  }
}
