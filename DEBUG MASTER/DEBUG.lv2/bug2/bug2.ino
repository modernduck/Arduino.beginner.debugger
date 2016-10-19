/*
 *  X X X O 
 *   รอ 0.5 วิ
 *  X X X X
 *   รอ 0.5 วิ
 *  วนไปที่ X X X O
 */
void setup() {
  // put your setup code here, to run once:
  pinMode(11, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(11, HIGH);
 delay(500);
 digitalWrite(11, HIGH);
 
}
