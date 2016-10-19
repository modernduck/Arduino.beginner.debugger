#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
   *  PPAP
   */
   lcd.setCursor(5, 0);
   lcd.print("P");
   tone(10, 50);
   delay(150);

   lcd.print("P");
   tone(10, 50);
   delay(150);

   lcd.print("A");
   tone(10, 100);
   delay(250);

   lcd.print("P");
   tone(10, 50);
   delay(150);

   lcd.clear();
   /*
    * BG Music
    */
    tone(10, 50);
    delay(100);
    noTone(10);
    delay(50);
    tone(10,500);
    delay(200);
    noTone(10);
    delay(50);

    tone(10, 50);
    delay(100);
    noTone(10);
    delay(50);
    tone(10,500);
    delay(200);
    noTone(10);
    delay(50);

    tone(10, 50);
    delay(100);
    noTone(10);
    delay(50);
    tone(10,500);
    delay(200);
    noTone(10);
    delay(50);

    /*
     * I HAVE AN APPLE
     */

    lcd.print("I ");
    tone(10, 50);
    delay(150);
    noTone(10);
    delay(50);

    lcd.print("HAVE ");
    tone(10, 50);
    delay(250);
    noTone(10);
    delay(50);

    lcd.print("A ");
    tone(10, 100);
    delay(1500);


    lcd.print("PEN");
    tone(10, 350);
    delay(600);
    noTone(10);
    delay(50);

    delay(500);

    lcd.setCursor(0,1);


    noTone(10);
    delay(50);

    lcd.print("HAVE ");
    tone(10, 50);
    delay(250);
    noTone(10);
    delay(50);

  
    noTone(10);
    delay(50);

    lcd.print("AP");
    tone(10, 350);
    delay(100);
    noTone(10);
    delay(50);
    lcd.print("PLE");
    tone(10, 100);
    delay(500);
    noTone(10);
    delay(50);

    delay(500);
    lcd.clear();
    lcd.setCursor(5,0);
    lcd.print("AHHHHHH");
    tone(10, 100);
    delay(5000);
    noTone(10);
    delay(500);

    lcd.clear();
    
    lcd.print("AP");
    tone(10, 350);
    delay(100);
    noTone(10);
    delay(50);
    lcd.print("PLE");
    tone(10, 100);
    delay(500);
    noTone(10);
    delay(50);
     lcd.print("PEN");
    tone(10, 500);
    delay(500);
    noTone(10);
    delay(50);

    delay(1000);
    lcd.clear();


     lcd.print("I ");
    tone(10, 50);
    delay(150);
    noTone(10);
    delay(50);

    lcd.print("HAVE ");
    tone(10, 50);
    delay(250);
    noTone(10);
    delay(50);

    lcd.print("A ");
    tone(10, 100);
    delay(150);
    noTone(10);
    delay(50);

    lcd.print("PEN");
    tone(10, 350);
    delay(600);
    noTone(10);
    delay(50);

    delay(500);

    lcd.setCursor(0,1);

    lcd.print("I ");
    tone(10, 50);
    delay(150);
    noTone(10);
    delay(50);

    lcd.print("HAVE ");
    tone(10, 50);
    delay(250);
    noTone(10);
    delay(50);

  
    lcd.print("PIE");
    tone(10, 100);
    delay(100);
    noTone(10);
    delay(50);
    
    lcd.print("AP");
    tone(10, 450);
    delay(100);
    noTone(10);
    delay(50);
    lcd.print("PLE");
    tone(10, 100);
    delay(500);
    noTone(10);
    delay(50);

    delay(500);
    lcd.clear();
    lcd.setCursor(5,0);
    lcd.print("AHHHHHH");
    tone(10, 100);
    delay(5000);
    noTone(10);
    delay(500);

    lcd.clear();

    lcd.print("PIE");
    tone(10, 100);
    delay(100);
    noTone(10);
    delay(50);
    lcd.print("PLE");
    tone(10, 100);
    delay(100);
    noTone(10);
    delay(50);
     lcd.print("PEN");
    tone(10, 200);
    delay(500);
    noTone(10);
    delay(50);

    delay(500);
    lcd.clear();

    lcd.print("AP");
    tone(10, 350);
    delay(100);
    noTone(10);
    delay(50);
     lcd.print("PEN");
    tone(10, 500);
    delay(500);
    noTone(10);
    delay(50);

    delay(500);
    lcd.setCursor(0,1);

    lcd.print("PIE");
    tone(10, 100);
    delay(100);
    noTone(10);
    delay(50);
    lcd.print("AP");
    tone(10, 450);
    delay(100);
    noTone(10);
    delay(50);
    lcd.print("PLE");
    tone(10, 100);
    delay(100);
    noTone(10);
    delay(50);
     lcd.print("PEN");
    tone(10, 200);
    delay(500);
    noTone(10);
    delay(50);

    delay(500);
    lcd.clear();

     lcd.print("PEN");
    tone(10, 200);
    delay(100);
    noTone(10);
    delay(50);
     lcd.print("PIE");
    tone(10, 100);
    delay(100);
    noTone(10);
    delay(50);
    lcd.print("AP");
    tone(10, 450);
    delay(100);
    noTone(10);
    delay(50);
    lcd.print("PLE");
    tone(10, 100);
    delay(100);
    noTone(10);
    delay(50);

 
     lcd.print("PEN");
    tone(10, 200);
    delay(500);
    noTone(10);
    delay(50);




    /*
    * BG Music
    */
    tone(10, 50);
    delay(100);
    noTone(10);
    delay(50);
    tone(10,500);
    delay(200);
    noTone(10);
    delay(50);

    tone(10, 50);
    delay(100);
    noTone(10);
    delay(50);
    tone(10,500);
    delay(200);
    noTone(10);
    delay(50);

    tone(10, 50);
    delay(100);
    noTone(10);
    delay(50);
    tone(10,500);
    delay(200);
    noTone(10);
    delay(50);

     /*
    * BG Music
    */
    tone(10, 50);
    delay(100);
    noTone(10);
    delay(50);
    tone(10,500);
    delay(200);
    noTone(10);
    delay(50);

    tone(10, 50);
    delay(100);
    noTone(10);
    delay(50);
    tone(10,500);
    delay(200);
    noTone(10);
    delay(50);

    tone(10, 50);
    delay(100);
    noTone(10);
    delay(50);
    tone(10,500);
    delay(200);
    noTone(10);
    delay(50);

    
    
    delay(5000);
    lcd.clear();
}
