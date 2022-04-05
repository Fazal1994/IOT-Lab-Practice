// C++ code
//
int pir = 2;
int led = 3;
  
void setup()
{
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
   Serial.begin(9600);
}

void loop()
{
 int i = digitalRead(2);
  Serial.print(i);
  delay(10000);
  if (i==1)
  {
    digitalWrite(led,HIGH);
    delay(10000);
}
  else 
  {
    digitalWrite(led,LOW);
    delay(10000);
  }
}
    
    