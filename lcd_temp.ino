#include<LiquidCrystal.h>

float temp;
float value;
int fan = 3;
const int rs = 13, en = 12, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  pinMode(A0, INPUT);
  pinMode(fan, OUTPUT);
}

void loop() {

  temp = analogRead(A0);

  float value = temp*(5.0/1024.0)*100.0;

  if (value>=60.0) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Temperature high!");
    delay(100);
    lcd.setCursor(0,1);
    lcd.print("Fan ON");
    delay(100);
    digitalWrite(fan, HIGH);
    delay(100);
  }

  else if (value<60.0) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Temperature low!");
    delay(100);
    lcd.setCursor(0,1);
    lcd.print("Fan OFF");
    delay(100);
    digitalWrite(fan, LOW);
    delay(100);
  }
  
  delay(500);
}
