#include<LiquidCrystal.h>

const int rs = 13, en = 12, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {

  lcd.begin(16, 2);

  pinMode(A0, INPUT);
}

void loop() {
  
 lcd.setCursor(0, 0);

  
 delay(500);

lcd.setCursor(16, 1);

lcd.autoscroll();
lcd.print("My name is Muhammad Adil");

delay(500);


  lcd.noAutoscroll();

  lcd.clear();

}
