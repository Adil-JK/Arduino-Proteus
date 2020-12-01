int button1 = 2;
int button2 = 3;
int button3 = 4;

void setup() {

pinMode (2, INPUT);
pinMode (3, INPUT);
pinMode (4, INPUT);

Serial.begin(9600);

}

void loop() {

  bool state1 = digitalRead(button1);
  bool state2 = digitalRead(button2);
  bool state3 = digitalRead(button3);

//  if (state1==true && state2==false && state3==false) {
//  //Serial.println("First button is pressed");
//    Serial.println(digitalRead(button1));
//  }
//
//  else if (state1==true && state2==true && state3==false) {
//  //Serial.println("Both first and second buttons are pressed");
//  Serial.println(digitalRead(button1));
//  Serial.println(digitalRead(button2));
//  }
//
//  else if (state1==true && state3==true && state2==false) {
//  //Serial.println("Both first and third buttons are pressed");
//  Serial.println(digitalRead(button1));
//  Serial.println(digitalRead(button3));
//  }
//
//  else if (state1==true && state2==true && state3==true) {
//
//  //Serial.println("All three buttons are pressed");
//  Serial.println(digitalRead(button1));
//  Serial.println(digitalRead(button2));
//  Serial.println(digitalRead(button3));
//  }
//
//  else if (state2==true && state1==false && state3==false) {
//  //Serial.println("Second button is pressed");
//  Serial.println(digitalRead(button2));
//  }
//
//  else if (state2==true && state3==true && state1==false) {
//  //Serial.println("Both second and third buttons are pressed");
//  Serial.println(digitalRead(button2));
//  Serial.println(digitalRead(button3));
//  }
//
//  else if (state3==true && state1==false && state2==false) {
//  // Serial.println("Third button is pressed");
//  Serial.println(digitalRead(button3));
//  }
//
////  else {
////  Serial.println("No button is pressed!");
////  }
//
//  delay(100);
//}

if (Serial.available()) {
  x = Serial.read();
}
  
Serial.println(digitalRead(button1));
Serial.println(digitalRead(button2));
Serial.println(digitalRead(button3));
 

delay(500);

}
  
