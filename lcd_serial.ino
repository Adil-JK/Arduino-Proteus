#include<LiquidCrystal.h>

const int rs = 13, en = 12, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  Serial.begin(57600);
}

void loop() {
  if (Serial.available()) {
    delay(100);
    lcd.clear();
    while (Serial.available()>0) {
      char data = Serial.read();
      Serial.print(data);
      delay(200);
      lcd.write(data);
    }
  }
  
  delay(1000);
}
