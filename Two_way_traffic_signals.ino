const int red_1 = 2;
const int yellow_1 = 1;
const int green_1 = 0;
const int red_2 = 13;
const int yellow_2 = 12;
const int green_2 = 11;

void setup() {

pinMode(red_1, OUTPUT);
pinMode(yellow_1, OUTPUT);
pinMode(green_1, OUTPUT);
pinMode(red_2, OUTPUT);
pinMode(yellow_2, OUTPUT);
pinMode(green_2, OUTPUT);

}

void loop() {
digitalWrite(red_1, HIGH);
digitalWrite(green_2, HIGH);
delay(10000);
digitalWrite(red_1, LOW);
digitalWrite(green_2, LOW);

digitalWrite(yellow_1, HIGH);
digitalWrite(yellow_2, HIGH);
delay(3000);
digitalWrite(yellow_1, LOW);
digitalWrite(yellow_2, LOW);

digitalWrite(green_1, HIGH);
digitalWrite(red_2, HIGH);
delay(10000);
digitalWrite(green_1, LOW);
digitalWrite(red_2, LOW);

}
