int gomb=13;
int g=9;
int b=10;
int r=11;
int poti=0;
int poti2=0;
int poti3=0;
byte fenyEro=0;
byte irany=1;
void setup() {
  pinMode (r, OUTPUT);
pinMode (b, OUTPUT);
pinMode (g, OUTPUT);
pinMode (gomb, INPUT_PULLUP);

pinMode (A0, INPUT);
pinMode (A1, INPUT);
pinMode (A2, INPUT);
Serial.begin (9600);

digitalWrite (r,1);
delay(1000);
digitalWrite (r,0);
digitalWrite (b,1);
delay(1000);
digitalWrite (b,0);
digitalWrite (g,1);
delay(1000);
digitalWrite (r,0);
digitalWrite (b,0);
digitalWrite (g,0);
//analogWrite (r,255);
  //analogWrite (b,124);
    //analogWrite (g,0);
}

void loop() {
  poti=analogRead(A0); //0-1023
  fenyEro=map(poti,0,1023,0,255);
  analogWrite (r,fenyEro); //0-255
 // if(fenyEro==255) irany=-1;
  //if (fenyEro==0) irany=1;
  //fenyEro=fenyEro+irany;
  //delay(10);
  poti2=analogRead(A1); //0-1023
  fenyEro=map(poti2,0,1023,0,255);
  analogWrite (b,fenyEro); //0-255
    poti3=analogRead(A2); //0-1023
  fenyEro=map(poti3,0,1023,0,255);
    analogWrite (g,fenyEro); //0-255

    if (digitalRead(gomb)==0)
  { 
    delay(60);
    if (digitalRead(gomb)==0){
      Serial.println ("Magynomtak baszod");
    }
      }
    }
