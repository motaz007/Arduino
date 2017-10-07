#define speedpin 9

#define MCR 2
#define MCL 3
#define POT 0
// define the pin numbers
int POT_val =0; //0-1023

void setup() {
  // put your setup code here, to run once:
pinMode (speedpin ,OUTPUT);
pinMode (MCR,OUTPUT);
pinMode (MCL,OUTPUT);

}



void MC1 (int M_speed){
  digitalWrite (speedpin ,LOW);
  delay(1000);
  digitalWrite(MCR,HIGH);
  digitalWrite (MCL,LOW);
  analogWrite(speedpin , M_speed); 
  }


void MC2 (int M_speed){
  digitalWrite (speedpin ,LOW);
  delay(1000);
  digitalWrite(MCR,LOW);
  digitalWrite (MCL,HIGH);
  analogWrite(speedpin , M_speed); 
  }
  void STOP (){
    digitalWrite(speedpin,LOW);
    delay(1000);
    }   
    
void loop() {
  // put your main code here, to run repeatedly:
int spd =0;
if (POT_val<460){
  spd =map(POT_val,0,460,0,255);
  MC1(spd);
  }
  else if (POT_val < 600){
    STOP();
    }
    else {
    spd = map(POT_val,600,1023,0,255);
    MC2(spd);
}



}
