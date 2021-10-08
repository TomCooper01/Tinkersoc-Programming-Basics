static const uint8_t display0[] = {7, 6, 3, 4, 5, 8, 9};
static const uint8_t display1[] = {11, 10, A2, A1, A0, 12, 13};

int alpha[16][7] {
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

/**
 * character0 -> A-F / 0-9 On display 0
 * character1 -> A-F / 0-9 On display 1
 */

void writeFuc(int character0, int character1) {
  for(int i = 0; i < 7; i++){
      digitalWrite(display0[i], alpha[character0][i]);
      digitalWrite(display1[i], alpha[character1][i]);
    }
}

void setup() {
  // put your setup code here, to run once:

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);

  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i = 0; i < 16; i++){
      writeFuc(i, i);
      delay(1000);
    }  

}
