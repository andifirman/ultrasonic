#define trigPin 7
#define echoPin 13

void setup()
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop()
{
  long durasi, jarak;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trigPin, LOW);
  
  durasi = pulseIn(echoPin, HIGH);
  jarak = (durasi/2)/29;
  
  if(jarak){
    Serial.print(jarak);
    Serial.println(" cm");
    delay(1000);
  } 
}
