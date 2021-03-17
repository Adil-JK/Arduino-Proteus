const int led = 13;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int input = analogRead(A0);
float temp = (5.0/1023.0)*input*100.0;

int lds = analogRead(A1);
float lds_value = (5.0/1023.0)*lds;

if (lds_value < 0.05) {
  digitalWrite(led, HIGH);
}
else {
  digitalWrite(led, LOW);
}

int vol = analogRead(A2);
float voltage = (5.0/1023.0)*vol;


Serial.print("Temperature is: ");
Serial.println(temp);

Serial.print("LDS value is: ");
Serial.println(lds_value);

Serial.print("Voltage is: ");
Serial.println(voltage);

delay(500);
}
