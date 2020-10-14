void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(8, INPUT);

}

void loop() {
  if(analogRead(A0)<341)
  {
    if(digitalRead(8) == HIGH)
    {
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW); 
    }
    else
    {
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
    }
  }
  else if(341<=analogRead(A0) && analogRead(A0) <682)
  {
    if(digitalRead(8) == HIGH)
    {
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(9, LOW);
    }
    else
    {
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(9, LOW);
    }
  }
  else
  {
    if(digitalRead(8) == HIGH)
    {
      digitalWrite(11, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
    }
    else
    {
      digitalWrite(11, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
    }
  }
}
