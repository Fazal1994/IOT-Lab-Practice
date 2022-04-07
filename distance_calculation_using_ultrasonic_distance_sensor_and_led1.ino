// C++ code
//
int echoPin = 2;
int trigPin = 3;
int redLED = 4;
int greenLED = 5;

float duration;
float distance;

void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delay(100);
  
  //Sets the trigPin HIGH(ACTIVE) for 10 ms
  digitalWrite(trigPin, HIGH);
  delay(100);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  
  //Calculating the distance
  distance = duration * 0.034 / 2;
  
  //Display the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  if (distance <= 50)
  {
    digitalWrite(greenLED,LOW);
    delay(100);
    digitalWrite(redLED, HIGH);
    delay(100);
  }
  else if (distance >= 150)
    {
      digitalWrite(redLED, LOW);
      delay(100);
      digitalWrite(greenLED, HIGH);
      delay(100);
  }
    else
    {
      digitalWrite(redLED, LOW);
      digitalWrite(greenLED, HIGH);
   }  
 }     