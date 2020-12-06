const int servoPin = 2; // servo connected to digital pin 2
int myAngle; // angle of the servo roughly 0-180
int pulseWidth; // servoPulse function variable
const int position0_led = 3; // servo motor position led at 0 degree 
const int position180_led = 4; //servo motor position led at 180 degree 

void setup()
{
 pinMode(servoPin, OUTPUT); 
 pinMode(position0_led, OUTPUT);
 pinMode(position180_led, OUTPUT);
 Serial.begin(9600);
}

void servoPulse(int servoPin, int myAngle)
{
 pulseWidth = (myAngle * 10) + 300; // determines delay
 digitalWrite(servoPin, HIGH); // set servo high
 delayMicroseconds(pulseWidth); // microsecond pause
 digitalWrite(servoPin, LOW); // set servo low
}

void loop()
{
 // servo starts at 0 deg and rotates to 180 deg
 for (myAngle=0; myAngle<=180; myAngle++)
 {
 servoPulse(servoPin, myAngle); // send pin and angle
 delay(1); // refresh cycle
 digitalWrite(position0_led, HIGH);
 digitalWrite(position180_led, LOW);
 Serial.print("Servo motor position is at "); 
 Serial.println(myAngle);
 }

 // servo starts at 180 deg and rotates to 0 deg
 for (myAngle=180; myAngle>=0; myAngle--)
 {
 servoPulse(servoPin, myAngle); // send pin and angle
 delay(1); // refresh cycle
 digitalWrite(position0_led, LOW);
 digitalWrite(position180_led, HIGH);
 Serial.print("Servo motor position is at ");
 Serial.println(myAngle);
 }
 
}
