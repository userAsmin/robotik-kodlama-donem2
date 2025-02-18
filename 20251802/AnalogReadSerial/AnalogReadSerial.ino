
void setup() {

  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(100);  
  if(sensorValue<70)
  {
    digitalWrite(2,1);
    digitalWrite(3,0);
    digitalWrite(4,0);
  
  }
  else if(sensorValue<150)
  {
    digitalWrite(2,1);
    digitalWrite(3,1);
    digitalWrite(4,0);
  }
  else if(sensorValue<350){
    digitalWrite(2,1);
    digitalWrite(3,1);
    digitalWrite(4,1);
  }
}
