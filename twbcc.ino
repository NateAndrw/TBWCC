//Project: Teddy Bear Wheel Chair Challenge
//Date: October 28th, 2026
//Note: Will set up PWM control next

//Pin Definitions
int speedPin = 9;
int firstPin = 12;      //add name
int secondPin = 13;     //add name
int omega = 240;        

//Pin Modes
void setup() {
  pinMode(firstPin, OUTPUT);
  pinMode(secondPin, OUTPUT);
  pinMode(speedPin, OUTPUT);
  //map(omega, 0, 100, 0, 255);
}

//Forward Function
void fwd(time) {
  
  analogWrite(speedPin, omega);
  digitalWrite(firstPin, LOW); //FORWARD ORANGE ON 12 YELLOW ON 13
  digitalWrite(secondPin, HIGH);
  delay(time);
  analogWrite(speedPin, 0);
}

//Reverse Function
void rev(time) {
  analogWrite(speedPin, omega);
  digitalWrite(firstPin, HIGH); //REVERSE ORANGE ON 12 YELLOW ON 13
  digitalWrite(secondPin, LOW);
  delay(time);
  analogWrite(speedPin, 0);
}

void loop() {
  delay(1000);
  fwd(6000);
  delay(1000);
  rev(6000);
}
