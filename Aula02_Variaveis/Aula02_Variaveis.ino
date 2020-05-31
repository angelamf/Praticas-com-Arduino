int intervaloPisca1 = 500;
int intervaloPisca2 = 2000;

void setup() {
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop() {
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  delay(intervaloPisca1);

  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  delay(intervaloPisca2);

}
