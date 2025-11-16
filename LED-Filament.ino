


void setup() {
  pinMode(3, OUTPUT);
}


// the loop function runs over and over again forever
void loop() {
  digitalWrite(3, LOW);
  delay(1500);                      // wait for a second
  digitalWrite(3, HIGH);
  delay(1500);                      // wait for a second
}