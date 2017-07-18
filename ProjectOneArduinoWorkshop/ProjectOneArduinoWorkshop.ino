//About the PWM
/*
 * Am not entirely sure how this thing works....
 */
int d = 5;
void setup(){
  pinMode(3, OUTPUT);
}

void loop(){
  for(int a = 0; a < 256; a++){
    analogWrite(3, a);
    delay(d);  
  }

  for(int a = 255; a >= 0; a--){
    analogWrite(3, a);
    delay(d);  
  }
  delay(200);
}
/*
  void setup(){
  pinMode(2, OUTPUT);
  }

  void loop(){
    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(2, LOW);
  }
*/
/*
void setup() {
  pinMode(2, OUTPUT);
}

void loop() {
//Testing if delay works like a sleep().
  delay(1000);
  for(int c = 5; c > 0; c--){
    digitalWrite(2, HIGH);
    delay(c*100);
    digitalWrite(2, LOW);
    delay(c*100);
  }    
}
*/
/*
   Sequentially, lights up three LED light bulbds in a "wavy way".
   This project was inspired by project 1 in
   Was done during the 07/15/17.
*/
/*
  void setup() {
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);

  }

  void loop() {
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(6, LOW);
  }
*/
