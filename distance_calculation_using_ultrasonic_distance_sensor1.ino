// C++ code
//
int echoPin = 2;
int trigPin = 3;

float duration;
float distance;

void setup()
{
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
}