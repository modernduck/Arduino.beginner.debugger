//set up อะไรก็ตามแต่ที่อยู่ใน ปีกกา {} จะ ทำงานครั้งเดียว
void setup() {
 // pinMode(11, OUTPUT);//กำหนดให้ pin เบอร์ 11 เป็น Output
  
}


void loop() {
  
  digitalWrite(11, HIGH);//เขียนค่า digital ให้ pin เบอร์ 11 เป็น HIGH
  delay(100);
  digitalWrite(11, LOW); 
  delay(1000);           
}
