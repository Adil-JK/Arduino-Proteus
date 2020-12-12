const int button = 3;
bool current_state = false;
bool previous_state = false;
int i=0;

void setup() {

Serial.begin(9600);
pinMode(button, INPUT);

}

void loop() {
  current_state = digitalRead(button);
  if (current_state != previous_state) {
    if (current_state==true and i==0){
    Serial.write(1);
  }
  
  else if (current_state==false and i==0) {
    Serial.write(2);
    i=1;
  }

  if (current_state==true and i==1) {
    Serial.write(3);
  }

  else if (current_state==false and i==1) {
    Serial.write(4);
    i=0;
  }
  } 
  current_state=previous_state;

}
