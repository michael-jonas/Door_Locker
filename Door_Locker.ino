const int sensorPin = A0;
const int ledPin = 2;

int sensorValue = 0;

void setup(){
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop(){
  sensorValue = analogRead(sensorPin);
  
  Serial.print(sensorValue);
  Serial.print("\n");
  
  if(sensorValue > 900){
    digitalWrite(ledPin, HIGH);
    delay(2000);
  }
  
  digitalWrite(ledPin, LOW);
}
