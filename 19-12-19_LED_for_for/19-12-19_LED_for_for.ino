void setup() {
  for(int i = 9;i <= 11;i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for(int i = 9;i <= 11;i++)
  {
    for(int j = 5;j > 0;j--)
    {
      digitalWrite(i, HIGH);
      delay(500);
      digitalWrite(i, LOW);
      delay(500);
    }
  }
}
