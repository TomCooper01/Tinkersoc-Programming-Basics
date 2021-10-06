#define button 2
#define R 11
#define G 10
#define B 9

int colour;

void setup() {
  // put your setup code here, to run once:

  colour = 0;

  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);

  pinMode(button, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(button) == LOW) {
    RGB(255, 0, 0);
    delay(100);
    RGB(0, 255, 0);
    delay(100);
    RGB(0, 0, 255);
    delay(100);
  }
  else
  {
    RGB(0, 0, 0);
    }
}

void RGB(int red, int green, int blue) {
  analogWrite(R, red);
  analogWrite(G, green);
  analogWrite(B, blue);
}
