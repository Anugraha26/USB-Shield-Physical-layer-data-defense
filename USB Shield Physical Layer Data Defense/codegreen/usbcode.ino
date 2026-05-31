const int port1 = A0;
const int port2 = A1;
const int greenLED = 4;
const int redLED = 5;
int idleMin = 500;   
int idleMax = 520;  
int detectLevel = 530; 
void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}
void loop() {
  int p1 = analogRead(port1);
  int p2 = analogRead(port2);
  if ((p1 > idleMin && p1 < idleMax) && (p2 > idleMin && p2 < idleMax)) {
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, LOW);
  }
  else if (p1 > detectLevel && p2 < detectLevel) {
    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, LOW);
  }
  else if (p2 > detectLevel && p1 < detectLevel) {
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, HIGH);
  }
  else {
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, LOW);
  }
}