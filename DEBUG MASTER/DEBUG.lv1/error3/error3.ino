#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); 	// initialize LCD library

int button;
void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  lcd.begin(16, 2);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.print(Yeah!);
  delay(100)
  lcd clear();

}
