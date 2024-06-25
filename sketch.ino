#define LED 2
#define LED1 4

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LED1, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);

  digitalWrite(LED1, HIGH);
  delay(500);
  digitalWrite(LED1,LOW);
  delay(500);
}