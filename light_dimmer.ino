int LIGHT ;
int LED = 6;
void setup() {
  // put your setup code here, to run once:
pinMode (LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(LIGHT=0;LIGHT<255;LIGHT += 5){
  analogWrite(LED,LIGHT);
  delay (30);
    }
  for(;LIGHT>0;LIGHT-=5){
  analogWrite(LED,LIGHT);
  delay (30);}
}
