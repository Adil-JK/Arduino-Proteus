void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);   //a
pinMode(3, OUTPUT);   //b
pinMode(4, OUTPUT);   //c
pinMode(5, OUTPUT);   //d
pinMode(6, OUTPUT);   //e
pinMode(7, OUTPUT);   //f
pinMode(8, OUTPUT);   //g

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(1, LOW);
digitalWrite(2, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(8, LOW);
delay(1000);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
delay(100);


digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(8, HIGH);
digitalWrite(6, HIGH);
digitalWrite(5, HIGH);
digitalWrite(4, LOW);
digitalWrite(7, LOW);
delay(1000);
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(8, LOW);
digitalWrite(6, LOW);
digitalWrite(5, LOW);


digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(1, LOW);
digitalWrite(2, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(8, HIGH);
delay(1000);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(2, LOW);
digitalWrite(5, LOW);
digitalWrite(8, LOW);
delay(100);

delay(100);

}
