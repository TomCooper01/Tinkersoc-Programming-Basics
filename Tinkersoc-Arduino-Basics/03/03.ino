#define button 2
#define LED 3


void setup() {
  // put your setup code here, to run once:

  pinMode(LED, OUTPUT);
  pinMode(button, INPUT_PULLUP);

}


void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(button) == LOW)
  {
    for(int i = 0; i < 5; i++)
    {
        digitalWrite(LED, LOW);
        delay(50);
        digitalWrite(LED, HIGH);
        delay(50);
      }
  }

  else
  {
    digitalWrite(LED, LOW);
  }

}
