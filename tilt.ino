
void setup() {
  pinMode(7, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}
 

void loop() {
  int tilt = digitalRead(7);
  Serial.println(tilt);
  if (tilt == 0) {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }
  else {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
  }
  delay(10);
}