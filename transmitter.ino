const int button = 3;
bool state = true;
int duration = 0;
bool bs;
void setup() {
    Serial.begin(9600);
    pinMode(button, INPUT);
}

void loop() {
  bs = debounce(button);
  while(bs){
    duration = duration + 100;
    delay(100);
    bs = debounce(button);
  }
    if(duration >= 100){
        if(state){
            Serial.write('1');
            state = false;
        }
        else{
            Serial.write('2');
            state = true;
        }
    }
    duration = 0;
}
// This is our debouncing function
bool debounce(int buttonPin){
  bool stateNow = digitalRead(buttonPin);
  if(stateNow == HIGH)
  {
    delay(15);
    stateNow = digitalRead(buttonPin);
  }
  return stateNow;
}
