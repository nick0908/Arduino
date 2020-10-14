void setup() {
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, INPUT);
  pinMode(7, INPUT);
}

void loop() {
  if(digitalRead(7) == HIGH)
  {
   digitalWrite(11, HIGH);
   digitalWrite(10, LOW);
  }
  else if(digitalRead(8) == HIGH)
  {
   digitalWrite(10, HIGH);
   digitalWrite(11, LOW);
  }
  if(digitalRead(7) == LOW)
  {
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }
  else if(digitalRead(8) == LOW)
  {
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }
}
