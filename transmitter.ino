// First mistake ia your conditions after line 18 cannot be true because it is inside the main if condition
const int button = 3;
bool state = true;
void setup() {
    Serial.begin(9600);
    pinMode(button, INPUT);
}

void loop() {
    if(debounce(button)){
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
// This is our debouncing function
bool debounce(int buttonPin){
  bool stateNow = digitalRead(buttonPin);
  if(stateNow == HIGH)
  {
    delay(50);
    stateNow = digitalRead(buttonPin);
  }
  return stateNow;
}