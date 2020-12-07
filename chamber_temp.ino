const int fan_1 = 12;
const int fan_2 = 13;

void setup() {
  
pinMode(fan_1, OUTPUT);
pinMode(fan_2, OUTPUT);
Serial.begin(9600);

}

void loop() {
  
int sensor1 = analogRead(A0);
int sensor2 = analogRead(A1);
 
float voltage1 = sensor1 * (5.0 / 1023.0);
float voltage2 = sensor2 * (5.0 / 1023.0);

Serial.println(voltage1);
Serial.println(voltage2);

if (voltage1 > 0.50 && voltage2 > 0.50)
{
  digitalWrite(fan_1, HIGH);
  digitalWrite(fan_2, HIGH);
}
else if (voltage1 < 0.50 && voltage2 < 0.50) {
  digitalWrite(fan_1, LOW);
  digitalWrite(fan_2, LOW);
}

}


























//void loop() {
//  // put your main code here, to run repeatedly:
//int temp1= analogRead(A0);
//float output_1 = temp1 * (2.0/1023);
//temperature1 = output_1*
//int temp2= analogRead(A1);
//float output_2 = temp2 * (2.0/1023);
//
////float output_1 = map(temp1, 0.2, 20.0, 20.0, 80.0);
////float output_2 = map(temp2, 0.2, 20.0, 20.0, 80.0);
//
//if(output_1>0.09 and output_2>0.09) {
//  digitalWrite(fan_1, output_1);
//  digitalWrite(fan_2, output_2);
//}
//
//else if(output_1<0.09 and output_2<0.09) {
//  digitalWrite(fan_1, LOW);
//  digitalWrite(fan_2, LOW);
//}
//
//delay(100);
//
//}
