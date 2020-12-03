int stateNow = 0;
int stateBefore = 0;
int i = 0;

void setup() {

pinMode (0, INPUT);

pinMode (1, OUTPUT);
pinMode (2, OUTPUT);
pinMode (3, OUTPUT);
pinMode (4, OUTPUT);
pinMode (5, OUTPUT);
pinMode (6, OUTPUT);
pinMode (7, OUTPUT);

}

void loop() {

stateNow = digitalRead(0);

if (stateNow != stateBefore) {

  if (stateNow==LOW and i==0) {   //01
 
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  i=1;

  }

  else if (stateNow==HIGH and i==1) {      //02

  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  
  digitalWrite (7, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (1, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (3, HIGH);

  }

  else if (stateNow==LOW and i==1) {
 
  digitalWrite (7, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (1, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (3, HIGH);
  i=2;
  }

  else if (stateNow==HIGH and i==2) {    //03

  digitalWrite (7, LOW);
  digitalWrite (6, LOW);
  digitalWrite (1, LOW);
  digitalWrite (4, LOW);
  digitalWrite (3, LOW);

  digitalWrite (7, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (1, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (5, HIGH);

  }

  else if (stateNow==LOW and i==2) {
 
  digitalWrite (7, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (1, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (5, HIGH);
  i=3;
  }

  else if (stateNow==HIGH and i==3) {   //04

  digitalWrite (7, LOW);
  digitalWrite (6, LOW);
  digitalWrite (1, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);

  digitalWrite (6, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (1, HIGH);

  }

  else if (stateNow==LOW and i==3) {
 
  digitalWrite (6, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (1, HIGH);
  i=4;
  }

  else if (stateNow==HIGH and i==4) {   //05

  digitalWrite (6, LOW);
  digitalWrite (5, LOW);
  digitalWrite (2, LOW);
  digitalWrite (1, LOW);

  digitalWrite (7, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (1, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (4, HIGH);

  }

  else if (stateNow==LOW and i==4) {
 
  digitalWrite (7, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (1, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (4, HIGH);
  i=5;
  }

  else if (stateNow==HIGH and i==5) {   //06

  digitalWrite (7, LOW);
  digitalWrite (2, LOW);
  digitalWrite (1, LOW);
  digitalWrite (5, LOW);
  digitalWrite (4, LOW);

  digitalWrite (7, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (3, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (1, HIGH);
  
  }

  else if (stateNow==LOW and i==5) {
 
  digitalWrite (7, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (3, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (1, HIGH);
  i=6;
  }

  else if (stateNow==HIGH and i==6) {   //07

  digitalWrite (7, LOW);
  digitalWrite (5, LOW);
  digitalWrite (4, LOW);
  digitalWrite (3, LOW);
  digitalWrite (2, LOW);
  digitalWrite (1, LOW);

  digitalWrite (7, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (5, HIGH);
  
  }

  else if (stateNow==LOW and i==6) {
 
  digitalWrite (7, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (5, HIGH);
  i=7;
  }

else if (stateNow==HIGH and i==7) {   //08

  digitalWrite (7, LOW);
  digitalWrite (6, LOW);
  digitalWrite (5, LOW);

  digitalWrite (1, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (3, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH); 
  digitalWrite (7, HIGH);  
  
  }

  else if (stateNow==LOW and i==7) {
 
  digitalWrite (1, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (3, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH); 
  digitalWrite (7, HIGH);
  i=8;
  }

  else if (stateNow==HIGH and i==8) {   //09

  digitalWrite (1, LOW);
  digitalWrite (2, LOW);
  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  digitalWrite (6, LOW); 
  digitalWrite (7, LOW);  

  digitalWrite (1, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH); 
  digitalWrite (7, HIGH); 
  
  }

  else if (stateNow==LOW and i==8) {
 
  digitalWrite (1, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH); 
  digitalWrite (7, HIGH);
  i=9;
  }
 
  else if (stateNow==HIGH and i==9) {   //08

  digitalWrite (1, LOW);
  digitalWrite (2, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  digitalWrite (6, LOW); 
  digitalWrite (7, LOW); 

  digitalWrite (1, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (3, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH); 
  digitalWrite (7, HIGH);  
  
  }

  else if (stateNow==LOW and i==9) {
 
  digitalWrite (1, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (3, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH); 
  digitalWrite (7, HIGH);
  i=10;
  }

  else if (stateNow==HIGH and i==10) {   //07

  digitalWrite (1, LOW);
  digitalWrite (2, LOW);
  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  digitalWrite (6, LOW); 
  digitalWrite (7, LOW);  

  digitalWrite (7, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (5, HIGH);
  
  }

  else if (stateNow==LOW and i==10) {
 
  digitalWrite (7, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (5, HIGH);
  i=11;
  }

  else if (stateNow==HIGH and i==11) {   //06

  digitalWrite (7, LOW);
  digitalWrite (6, LOW);
  digitalWrite (5, LOW);

  digitalWrite (7, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (3, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (1, HIGH);
  }

  else if (stateNow==LOW and i==11) {

  digitalWrite (7, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (3, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (1, HIGH);
  i=12;
  }

  else if (stateNow==HIGH and i==12) {   //05

  digitalWrite (7, LOW);
  digitalWrite (5, LOW);
  digitalWrite (4, LOW);
  digitalWrite (3, LOW);
  digitalWrite (2, LOW);
  digitalWrite (1, LOW);

  digitalWrite (7, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (1, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (4, HIGH);

  }

  else if (stateNow==LOW and i==12) {

  digitalWrite (7, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (1, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (4, HIGH);
  i=13;
  }

  else if (stateNow==HIGH and i==13) {   //04

  digitalWrite (7, LOW);
  digitalWrite (2, LOW);
  digitalWrite (1, LOW);
  digitalWrite (5, LOW);
  digitalWrite (4, LOW);

  digitalWrite (6, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (1, HIGH);

  }

  else if (stateNow==LOW and i==13) {

  digitalWrite (6, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (2, HIGH);
  digitalWrite (1, HIGH);
  i=14;
  }

  else if (stateNow==HIGH and i==14) {   //03

  digitalWrite (6, LOW);
  digitalWrite (5, LOW);
  digitalWrite (2, LOW);
  digitalWrite (1, LOW);

  digitalWrite (7, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (1, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (5, HIGH);  

  }

  else if (stateNow==LOW and i==14) {

  digitalWrite (7, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (1, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (5, HIGH); 
  i=15;
  }

  else if (stateNow==HIGH and i==15) {   //02

  digitalWrite (7, LOW);
  digitalWrite (6, LOW);
  digitalWrite (1, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW); 

  digitalWrite (7, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (1, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (3, HIGH);

  }

  else if (stateNow==LOW and i==15) {

  digitalWrite (7, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (1, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (3, HIGH);
  i=16;
  }

  else if (stateNow==HIGH and i==16) {   //01
    
  digitalWrite (7, LOW);
  digitalWrite (6, LOW);
  digitalWrite (1, LOW);
  digitalWrite (4, LOW);
  digitalWrite (3, LOW);
  i=0; 
  }

}

stateBefore = stateNow;

}
