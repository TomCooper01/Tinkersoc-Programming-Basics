#define button 2
#define LED0 3
#define LED1 5
#define LED2 6

void setup() {
  // put your setup code here, to run once:

  int loop;

  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(button, INPUT_PULLUP);

}


void loop() {
  // LOW -> HIGH - State will stay on when button released
  // HIGH -> LOW - State will stay off when button released

  int loop = 100;

  while (digitalRead(button) == LOW) {
    digitalWrite(LED0, HIGH);
    delay(loop);
    digitalWrite(LED0, LOW);
    delay(loop);
    digitalWrite(LED1, HIGH);
    delay(loop);
    digitalWrite(LED1, LOW);
    delay(loop);
    digitalWrite(LED2, HIGH);
    delay(loop);
    digitalWrite(LED2, LOW);
    delay(loop);
  }
}
