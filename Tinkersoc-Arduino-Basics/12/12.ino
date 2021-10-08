//{a,b,c,d,e,f,g}

int displayLed[16][7] {
  {1, 1, 1, 1, 1, 1, 0}, //  0
  {0, 1, 1, 0, 0, 0, 0}, //  1
  {1, 1, 0, 1, 1, 0, 1}, //  2
  {1, 1, 1, 1, 0, 0, 1}, //  3
  {0, 1, 1, 0, 0, 1, 1}, //  4
  {1, 0, 1, 1, 0, 1, 1}, //  5
  {1, 0, 1, 1, 1, 1, 1}, //  6
  {1, 1, 1, 0, 0, 0, 0}, //  7
  {1, 1, 1, 1, 1, 1, 1}, //  8
  {1, 1, 1, 0, 0, 1, 1}, //  9
  {1, 1, 1, 0, 1, 1, 1}, //  A
  {0, 0, 1, 1, 1, 1, 1}, //  B
  {1, 0, 0, 1, 1, 1, 0}, //  C
  {0, 1, 1, 1, 1, 0, 1}, //  D
  {1, 0, 0, 1, 1, 1, 1}, //  E
  {1, 0, 0, 0, 1, 1, 1}  //  F
};

void writeFuc(int dis) {
  int pin = 2;
  for (int i = 0; i < 7; i++) {
    digitalWrite(pin, displayLed[dis][i]);
    pin++;
  }
}

void setup() {
  // put your setup code here, to run once:

  pinMode(2, OUTPUT);   //  a
  pinMode(3, OUTPUT);   //  b
  pinMode(4, OUTPUT);   //  c
  pinMode(5, OUTPUT);   //  d

  pinMode(6, OUTPUT);   //  e
  pinMode(7, OUTPUT);   //  f
  pinMode(8, OUTPUT);   //  g
  pinMode(9, OUTPUT);  //  dp

}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 0; i < 16; i++) {
    delay(1000);
    writeFuc(i);
  }

}
