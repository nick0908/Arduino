void setup() {
  for(int i=8; i<12;i++)    //8 = L+,9 = L-,10 = R+,11 = R-
  {
    pinMode(i, OUTPUT);
  }

}

void loop() {
  digitalWrite(8, HIGH);              //전진
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  delay(1000);
  
  digitalWrite(8, LOW);               //후진
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(1000);
  
  digitalWrite(8, LOW);               //좌회전
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  delay(1000);
  
  digitalWrite(8, HIGH);              //우회전
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(1000);
  
  digitalWrite(8, LOW);               //좌턴
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  delay(1000);
  
  digitalWrite(8, HIGH);              //우턴
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(1000);
  
  digitalWrite(8, LOW);               //정지
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(1000);

}
