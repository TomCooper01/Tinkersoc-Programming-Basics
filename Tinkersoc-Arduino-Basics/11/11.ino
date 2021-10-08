#define g 2
#define f 3
#define a 4
#define b 5

#define e 6
#define d 7
#define c 8
#define dp 9

void setup() {

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);

  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  sevenSeg(1);
  delay(1000);
  sevenSeg(2);
  delay(1000);
  sevenSeg(3);
  delay(1000);
  sevenSeg(4);
  delay(1000);
  sevenSeg(5);
  delay(1000);
  sevenSeg(6);
  delay(1000);
  sevenSeg(7);
  delay(1000);
  sevenSeg(8);
  delay(1000);
  sevenSeg(9);
  delay(1000);
  sevenSeg('a');
  delay(1000);
  sevenSeg('b');
  delay(1000);
  sevenSeg('c');
  delay(1000);
  sevenSeg('d');
  delay(1000);
  sevenSeg('e');
  delay(1000);
  sevenSeg('f');
  delay(1000);
}



void sevenSeg(int n) {
  switch (n) {
    case 0:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);

      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);

      digitalWrite(dp, LOW);
      break;
    case 1:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);

      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);

      digitalWrite(dp, LOW);
      break;
    case 2:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);

      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);

      digitalWrite(dp, LOW);
      break;
    case 3:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);

      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);

      digitalWrite(dp, LOW);
      break;
    case 4:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);

      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);

      digitalWrite(dp, LOW);
      break;
    case 5:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);

      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);

      digitalWrite(dp, LOW);
      break;
    case 6:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);

      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);

      digitalWrite(dp, LOW);
      break;
    case 7:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);

      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);

      digitalWrite(dp, LOW);
      break;
    case 8:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);

      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);

      digitalWrite(dp, LOW);
      break;
    case 9:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);

      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);

      digitalWrite(dp, LOW);
      break;
    case 'a':
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);

      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);

      digitalWrite(dp, LOW);
      break;
    case 'b':
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);

      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);

      digitalWrite(dp, LOW);
      break;
    case 'c':
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);

      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);

      digitalWrite(dp, LOW);
      break;
    case 'd':
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);

      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);

      digitalWrite(dp, LOW);
      break;
    case 'e':
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);

      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);

      digitalWrite(dp, LOW);
      break;
    case 'f':
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);

      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);

      digitalWrite(dp, LOW);
      break;
  }
}
