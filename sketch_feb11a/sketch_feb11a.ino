void setup()
{
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (analogRead(A0) < 700) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  Serial.println((analogRead(A0)));
  delay(100); 
}