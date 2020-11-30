int button1 = 2;
int button2 = 3;
int button3 = 4;

bool state1;
bool state2;
bool state3;

void setup() {

pinMode (2, INPUT);
pinMode (3, INPUT);
pinMode (4, INPUT);

Serial.begin(9600);
}

void loop() {

  
  if (state1==TRUE) {

  digitalRead(button1, HIGH);
  Serial.println("First button is pressed");

  }

  else if (button1==HIGH and button2==HIGH) {
  Serial.println("Both first and second buttons are pressed");
 
  }

  else if (button1==HIGH and button2==HIGH and button3==HIGH) {
 
  Serial.println("All three buttons are pressed");

  }

  else if (button2==HIGH) {

  Serial.println("Button 2 is pressed");

  }

  else if (button1==HIGH and button3==HIGH) {
 
  Serial.println("Both buttons 1 and 3 are pressed");

  }

 else if (button3==HIGH) {
 
  Serial.println("Button 3 is pressed");

  }


}

