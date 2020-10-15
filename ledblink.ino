int ledpin = 13 //digitalpin 13
int redpin = 10;
int greenpin = 11;
int bluepin = 12;
void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
}

void loop() {
  digitalWrite(ledpin, HIGH);  
  delay(1000);                      
  digitalWrite(ledpin, LOW);   
  delay(1000); 
  while(true){
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }
}
