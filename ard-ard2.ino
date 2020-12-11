const int led = 5;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led, OUTPUT);
}

void loop() {

bool value = Serial.read();
if (value==true) {
  digitalWrite(led, HIGH);
}
else {
  digitalWrite(led, LOW);
}
 delay(100);

}
