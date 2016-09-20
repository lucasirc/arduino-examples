
//    _a_
// f |   | b
//   |_g_|
// e |   | c
//   |_d_| * rdp 
                       // G  F  A  B  E  D  C  RDP
int segments[11][8] = {  {1, 0, 0, 0, 0, 0, 0, 1}, // 0
                         {1, 1, 1, 0, 1, 1, 0, 1}, // 1
                         {0, 1, 0, 0, 0, 0, 1, 1}, // 2
                         {0, 1, 0, 0, 1, 0, 0, 1}, // 3
                         {0, 0, 1, 0, 1, 1, 0, 1}, // 4
                         {0, 0, 0, 1, 1, 0, 0, 1}, // 5
                         {0, 0, 0, 1, 0, 0, 0, 1}, // 6
                         {1, 1, 0, 0, 1, 1, 0, 1}, // 7
                         {0, 0, 0, 0, 0, 0, 0, 1}, // 8
                         {0, 0, 0, 0, 1, 0, 0, 0},  // 9
                         {0, 0, 0, 0, 0, 1, 0, 0},  // A
                      };

void setup () {
  
  pinMode(2, OUTPUT); //G
  pinMode(3, OUTPUT); //F
  pinMode(4, OUTPUT); //A
  pinMode(5, OUTPUT); //B
  pinMode(6, OUTPUT); //D
  pinMode(7, OUTPUT); //E
  pinMode(8, OUTPUT); //C
  pinMode(9, OUTPUT); // RDP
}


void turnOn(int number) {
   for ( int i = 0; i < 9; i++) {
      digitalWrite(i+2, segments[number][i]); 
   }
}

void loop() {
  for ( int i = 0; i < 11; i++) {
    turnOn(i);
    delay(1000);
  }
}