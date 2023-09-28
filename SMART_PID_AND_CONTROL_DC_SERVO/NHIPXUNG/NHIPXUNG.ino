int M1=5, M2=6;
int dir1=7, dir2=8;
void setup()
{
  Serial.begin(19200);
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
}

void turn_left()
{
  digitalWrite(dir1, 1);
  analogWrite(M1, 0);
  digitalWrite(dir2, 1);
  analogWrite(M2, 200);
    
}

void turn_right()
{
  digitalWrite(dir1, 1);
  analogWrite(M1, 200);
  digitalWrite(dir2, 1);    
  analogWrite(M2, 0);
}

void go_straight()
{
  digitalWrite(dir1, 1);
  analogWrite(M1, 200);
  digitalWrite(dir1, 1);
  analogWrite(M2, 200);
}

void STOP()
{
  //digitalWrite(dir1, 1);
  analogWrite(M1, 255);
  //digitalWrite(dir1, 1);
  analogWrite(M2, 255);
}
void loop()
{
  digitalWrite(dir, 0);
  analogWrite(PWM,255);

}
