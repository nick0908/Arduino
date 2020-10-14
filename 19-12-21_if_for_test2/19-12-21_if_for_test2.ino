void setup() {
  pinMode(A0, INPUT);
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  int a = analogRead(A0);
  int b = digitalRead(8);
  if(a<341)
  {
    if(b == HIGH)
    {
      for(int i=0;i<5;i++)
      {
        digitalWrite(9, HIGH);
        delay(500);
        digitalWrite(9, LOW);
        delay(500);
      }
    }
  }
  else if(341<= a && a<682)
  {
    if(b == HIGH)
    {
      for(int i=0;i<5;i++)
      {
        digitalWrite(10, HIGH);
        delay(500);
        digitalWrite(10, LOW);
        delay(500);
      }
    }
  }
  else
  {
    if(b == HIGH)
    {
      for(int i=0;i<5;i++)
      {
        digitalWrite(11, HIGH);
        delay(500);
        digitalWrite(11, LOW);
        delay(500);
      }
    }
  }
}
