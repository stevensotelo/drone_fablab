/*
Adafruit Arduino - Lesson 13. DC Motor
*/
int motorPin = 3;
int potPin = A0;
int potValue = 0;
int motorValue = 0;

void setup()
{
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  while (! Serial);
  Serial.println("Speed 0 to 255");
}
void loop()
{  
  potValue = analogRead(potPin);  
   motorValue = map(potValue, 0, 1023, 0, 255);
   analogWrite(motorPin, motorValue);  
   Serial.print("potentiometer = " );     
   Serial.print(potValue);
   Serial.print("\t motor = ");
   Serial.println(motorValue);
   delay(2);
}

