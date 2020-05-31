#define LED_B 8
#define LED_W 7
#define BTN 2

void setup() {
  pinMode(LED_B, OUTPUT);
  pinMode(LED_W, OUTPUT);
  pinMode(BTN, INPUT);
  digitalWrite(LED_B, HIGH);
}

void loop() {
  while(!digitalRead(BTN));
  delay(500);
  digitalWrite(LED_B, !digitalRead(LED_B));
  digitalWrite(LED_W, !digitalRead(LED_B));
}
