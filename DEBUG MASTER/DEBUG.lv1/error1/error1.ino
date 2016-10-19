#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.clear()

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.print("Hello");
  delay(1000);
  lcd.Print(" Sup!!!!");
  delay(1000);
  lcd.setCursor(5, 1);
  lcd.print("Yooo!");
  delay(1000);
  lcD.clear();
  delay(1000);
}
