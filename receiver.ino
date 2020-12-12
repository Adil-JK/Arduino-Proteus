const int led = 5;
int value = 0;

void setup() {
  
Serial.begin(9600);
pinMode(led, OUTPUT);
}

void loop() {
 
int value = Serial.read();
if (value==1) {
  digitalWrite(led, HIGH);
}

else if (value==2) {
  digitalWrite(led, LOW);
  
}

else if (value==3) {
  digitalWrite(led, HIGH);

}

else if (value==4) {
  digitalWrite(led, LOW);

}

 delay(100);

}
