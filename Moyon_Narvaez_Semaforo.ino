void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(10, HIGH);
  delay(3000);
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);
  delay(2000);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  delay(000);
  digitalWrite(7, LOW);



}
