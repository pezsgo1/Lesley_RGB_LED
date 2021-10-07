int g=9;
int b=10;
int r=11;
void setup() {
  pinMode (r, OUTPUT);
pinMode (b, OUTPUT);
pinMode (g, OUTPUT);
digitalWrite (r,1);
delay(1000);
digitalWrite (r,0);
digitalWrite (b,1);
delay(1000);
digitalWrite (r,0);
digitalWrite (b,0);
digitalWrite (g,0);
analogWrite (r,255);
  analogWrite (b,124);
    analogWrite (g,0);
}

void loop() {
  // put your main code here, to run repeatedly:

}
