void setup() {

  pinMode(2, OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  
}

/*
 * Sequentially, lights up three LED light bulbds in a "wavy way".
 * This project was inspired by project 1 in 
 * Was done during the 07/15/17.
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
