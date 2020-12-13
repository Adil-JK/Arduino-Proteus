// First mistake ia your conditions after line 18 cannot be true because it is inside the main if condition
const int button = 3;
bool btnState;

void setup() {
    Serial.begin(9600);
    pinMode(button, INPUT);
}

void loop() {
  btnState = digitalRead(button);
  if(btnState == true){
      Serial.write(1);
  }
  else{
      Serial.write(2);
      delay(100);
  }
  
}
