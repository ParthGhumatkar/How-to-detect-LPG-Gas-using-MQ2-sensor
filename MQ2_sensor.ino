int buzzer = 7;
int MQ2 = A0;
int Value = 500;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzer,OUTPUT);
pinMode(MQ2,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogSensor = analogRead(MQ2);

  Serial.print("Sensor value:");
  Serial.print(analogSensor);
  if (analogSensor > Value);
  {
    digitalWrite(buzzer,HIGH);
  }
    else
    {
    digitalWrite(buzzer,HIGH);
    }
    delay(100);
  }
  
}
