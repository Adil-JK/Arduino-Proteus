int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;

bool state1 = false;
bool state2 = false;
bool state3 = false;
bool state4 = false;
char input;

void setup() {

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);

Serial.begin(9600);

}

void loop() {

  if (Serial.available()) {
    
    input = Serial.read();
      if (input=='1') {
        if (state1 = !state1){
        state1 = true;
        Serial.println("RED is ON");
      }
          else {
            state1 = false;
            Serial.println("RED is off");
          }
  }
   
      else if (input=='2') {
        if (state2 = !state2){
        state2 = true;
        Serial.println("GREEN is ON");
      }
          else {
            state2 = false;
            Serial.println("GREEN is off");
          }
  }


      else if (input=='3') {
        if (state3 = !state3){
        state3 = true;
        Serial.println("BLUE is ON");
      }
          else {
            state3 = false;
            Serial.println("BLUE is off");
          }
  }


      else if (input=='4') {
        if (state4 = !state4){
        state1 = true;
        Serial.println("YELLOW is ON");
      }
          else {
            state4 = false;
            Serial.println("YELLOW is off");
          }
  }

    else {

    Serial.println("You have entered invalid input");

}
  
}
    digitalWrite(led1, state1);
    digitalWrite(led2, state2);
    digitalWrite(led3, state3);
    digitalWrite(led4, state4);

}
