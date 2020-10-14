int i=0;
void setup() {
   pinMode(7, INPUT);
   pinMode(9, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(11, OUTPUT);
}

void loop() {
  if(digitalRead(7) == HIGH)
  {
    i++;
    delay(100);
    if(i == 1)
    {
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW); 
    }
    else if(i == 2)
    {
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
    }
    else if(i == 3)
    {
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
    }
    else if(i == 4)
    {
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
    }
    else if(i == 5)
    {
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      i =0;
    }
    
  } 
}
