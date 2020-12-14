#include<LiquidCrystal.h>

float temp;
float value;
float final_value;
const int rs = 13, en = 12, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {

  lcd.begin(16, 2);
  lcd.print("Muhammad Adil");
  pinMode(A0, INPUT);
}

void loop() {
  
  lcd.setCursor(0, 1);

  temp = analogRead(A0);

  float value = temp*(5.0/1024.0)*100.0;

  lcd.print(value);

}

