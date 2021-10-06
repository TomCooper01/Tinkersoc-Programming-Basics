#define button 2
#define LED 3


void setup() {
  // put your setup code here, to run once:

  pinMode(LED, OUTPUT);
  pinMode(button, INPUT_PULLUP);

}


void loop() {
  // LOW -> HIGH - State will stay on when button released
  // HIGH -> LOW - State will stay off when button released

  while (digitalRead(button) == LOW) {
    digitalWrite(LED, HIGH);
    delay(50);
    digitalWrite(LED, LOW);
    delay(50);
  }
}
