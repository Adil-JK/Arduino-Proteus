int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;

char state;

void setup() {

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);

Serial.begin(9600);

}

void loop() {

  if (Serial.available()) {
    state = Serial.read();
      if (state=='1') {
        digitalWrite(led1, HIGH);
        Serial.println("RED is high");
//        led_state = true;
}

  else if (state=='2'){
    digitalWrite(led2, HIGH);
    Serial.println("GREEN is high");
//    led_state = false;
  }

else if (state=='3'){
    digitalWrite(led3, HIGH);
    Serial.println("BLUE is high");
}

else if (state=='4'){
    digitalWrite(led4, HIGH);
    Serial.println("YELLOW is high");
}

else {

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);

}
  
}


}
