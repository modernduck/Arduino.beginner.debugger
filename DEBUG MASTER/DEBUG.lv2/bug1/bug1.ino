//เพิ่ม library(ชุดโคด) สำหรับการใช้จอ LCD นะจิ๊
#include <LiquidCrystal.h>
//ทำให้ Arduino รู้จัก LCD ของเราในชื่อ lcd โดย 8,9,4,5,6,7 ใช้กับ อุปกรณ์นี้เท่านั้น
LiquidCrystal lcd(8, 9, 7, 5, 6, 4);//ตั้งชื่อเองได้ไม่จำเป็นต้องเป็น lcd

void setup() {
  // put your setup code here, to run once:
  //เริ่ม set จอ คล้ายๆ pinMode แต่ถ้าเป็น LCD ใช้ lcd.begin( กว้าง, สูง )
  //lcd.begin(16, 2);
  //พิมพ์บนจอ นะจิ๊
  lcd.print("YOLO");
  delay(200);
  lcd.print("5555");
  delay(200);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(2, 1);
  lcd.print("I AM A GOOD BOY");
  delay(1000);
  //เคลียร์ทั้งจอเลยนะ 1 วินาที
  lcd.clear();
  lcd.print("YOLO5555");
  delay(1000);
  
}
