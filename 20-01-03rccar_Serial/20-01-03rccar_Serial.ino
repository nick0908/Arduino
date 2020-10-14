void setup() {
  for(int i=8; i<12;i++)    //8 = L+,9 = L-,10 = R+,11 = R-
  {
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0)
  {
    String a = Serial.readString();
    if(a == "go")
    {
      digitalWrite(8, HIGH);              //전진
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
    }
    else if(a == "back")
    {
      digitalWrite(8, LOW);               //후진
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
    }
    else if(a == "left")
    {
      digitalWrite(8, LOW);               //좌회전
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
    }
    else if(a == "right")
    {
      digitalWrite(8, HIGH);              //우회전
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
    }
    else if(a == "left turn")
    {
      digitalWrite(8, LOW);               //좌턴
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
    }
    else if(a == "right turn")
    {
      digitalWrite(8, HIGH);              //우턴
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
    }
    else if(a == "stop")
    {
      digitalWrite(8, LOW);               //정지
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
    }
  } 

  
  
  
  
  
  
  
  
  

}
