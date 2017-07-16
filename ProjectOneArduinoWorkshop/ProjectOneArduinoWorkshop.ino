/*
 * Sequentially, lights up three LED light bulbds in a "wavy way".
 * This project was inspired by project 1 in 
 */
//Runs once upon the beginning of the program.
void setup() {
  pinMode(2, OUTPUT); 
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
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
