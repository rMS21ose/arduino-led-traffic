// Pin configuration
int redPin = 13;   
int yellowPin = 12; 
int greenPin = 11; 

void setup() {
  // Set LED pins as OUTPUT
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // Red light on, Green and Yellow off
  digitalWrite(redPin, HIGH);   
  digitalWrite(yellowPin, LOW); 
  digitalWrite(greenPin, LOW);  
  delay(1000);                  

  // Yellow light on, Red and Green off
  digitalWrite(redPin, LOW);    
  digitalWrite(yellowPin, HIGH); 
  digitalWrite(greenPin, LOW);  
  delay(1000);                  

  // Green light on, Red and Yellow off
  digitalWrite(redPin, LOW);    
  digitalWrite(yellowPin, LOW); 
  digitalWrite(greenPin, HIGH);  
  delay(1000);                
}