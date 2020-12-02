void setup() {
  // put your setup code here, to run once:
pinMode(1, OUTPUT);   //a
pinMode(2, OUTPUT);   //b
pinMode(3, OUTPUT);   //c
pinMode(4, OUTPUT);   //d

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(1, LOW);
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
delay(1000);

digitalWrite(1, LOW);
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
delay(1000);

digitalWrite(1, LOW);
digitalWrite(2, LOW);
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
delay(1000);
}
