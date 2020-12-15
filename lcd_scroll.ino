#include<LiquidCrystal.h>

const int rs = 13, en = 12, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Muhammad Adil");
}

void loop() {
  
  for (int left_counter=0; left_counter<13; left_counter++) {
    lcd.scrollDisplayLeft();
    delay(100);
  }

  for (int right_counter=0; right_counter<29; right_counter++) {
    lcd.scrollDisplayRight();
    delay(100);
  }

  for (int center_counter=0; center_counter<16; center_counter++) {
    lcd.scrollDisplayLeft();
    delay(150);
  }

  lcd.setCursor(0,1);
  lcd.print("Bye Bye!");
  delay(1500);
  lcd.clear();
  
  delay(1000);
}
