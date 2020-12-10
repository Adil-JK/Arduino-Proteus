const int AnalogIn = A0;
const int AnalogOut = 5;

void setup() {
pinMode(AnalogOut, OUTPUT);
Serial.begin(9600);
}

void loop() {
 
 int input = analogRead(AnalogIn);
 int output = map(input, 0, 1024, 0, 255);
 float duty_cycle = (output/255.0)*100.0;
 
 analogWrite(AnalogOut, duty_cycle);
 
 Serial.print("Motor is running at duty cycle of ");
 Serial.println(duty_cycle);
 delay(100);
 
}
