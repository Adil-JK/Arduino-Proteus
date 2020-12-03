
int stateNow = 0;
int stateBefore = 0;

int i = 0;
int j = 0;
int k = 0;

void setup() {

pinMode (0, INPUT);

pinMode (11, OUTPUT);
pinMode (12, OUTPUT);
pinMode (13, OUTPUT);
}

void loop() {

stateNow = digitalRead(0);

if (stateNow != stateBefore) {

  if (stateNow==LOW and i==0 and j==0 and k==0) {
 
  digitalWrite (11, HIGH);

  j=1;

  }

  else if (stateNow==HIGH and j==1 and k==0) {

  digitalWrite (11, LOW);
  digitalWrite (12, HIGH);

  i=1;

  }

  else if (stateNow==LOW and i==1 and j==1 and k==0) {
 
  digitalWrite (12, HIGH);

  k=1;

  }

  else if (stateNow==HIGH and i==1 and j==1 and k==1) {

  digitalWrite (12, LOW);
  digitalWrite (13, HIGH);

  }

  else if (stateNow==LOW and i==1 and j==1 and k==1) {
 
  digitalWrite (13, HIGH);

  i=0;

  }

  else if (stateNow==HIGH and i==0 and j==1 and k==1) {

  digitalWrite (13, LOW);
  digitalWrite (11, HIGH);
  
  j=0;
  k=0;

  }

}

stateBefore = stateNow;

}
