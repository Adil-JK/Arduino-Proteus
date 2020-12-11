const int button = 3;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(button, INPUT_PULLUP);
}

void loop() {
  bool state = digitalRead(button);
  if (state==true){
  Serial.write(1);
  }
 delay(100);

}
