void setup() {
  pinMode(A0, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop(){ 
  if(analogRead(A0)<341)
  {
    if(digitalRead(8) == HIGH)
    {   
      for(int i=0; i<5; i++)
      {
        digitalWrite(9, HIGH);
        delay(500);
        digitalWrite(9, LOW);
        delay(500);
      }
    }
    if(digitalRead(7) == HIGH)
    {
      for(int i=0; i<5; i++)
      {
        digitalWrite(9, HIGH);
        digitalWrite(10, HIGH);
        delay(500);
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        delay(500);
      }
    }
  }
  if(341<= analogRead(A0) && analogRead(A0) <682)
  {
    if(digitalRead(8) == HIGH)
    {
      for(int i=0; i<5; i++)
      {
        digitalWrite(10, HIGH);
        delay(500);
        digitalWrite(10, LOW);
        delay(500);
      }
    }
    if(digitalRead(7) == HIGH)
    {
      for(int i=0; i<5; i++)
      {
        digitalWrite(10, HIGH);
        digitalWrite(11, HIGH);
        delay(500);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
        delay(500);
      }
    }
  }
  if(682<= analogRead(A0))
  {
    if(digitalRead(8) == HIGH)
    {
      for(int i=0; i<5; i++)
      {
        digitalWrite(11, HIGH);
        delay(500);
        digitalWrite(11, LOW);
        delay(500);   
      }
    }
    if(digitalRead(7) == HIGH)
    {
      for(int i=0; i<5; i++)
      {
        digitalWrite(11, HIGH);
        digitalWrite(9, HIGH);
        delay(500);
        digitalWrite(11, LOW);
        digitalWrite(9, LOW);
        delay(500); 
      }
    }
  }
}
