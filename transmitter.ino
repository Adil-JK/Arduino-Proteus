// First mistake ia your conditions after line 18 cannot be true because it is inside the main if condition
const int button = 3;
bool btnState;
bool state = true;

void setup() {
    Serial.begin(9600);
    pinMode(button, INPUT);
}

void loop() {
  btnState = digitalRead(button);
  if(btnState == true){
      if(state){
          Serial.write('1');
          state = false;
      }
      else{
          Serial.write('2');
          state = true;
      }
  }
  
}
