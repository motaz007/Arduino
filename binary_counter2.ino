const int LED1=2;
const int LED2=3;
const int LED3=4;
const int LED4=5;
int LED2stat=0;
int LED3stat=0;
int LED4stat=0;

int counter =0;
void setup() {
  // put your setup code here, to run once:
pinMode(LED1,OUTPUT);
pinMode (LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);

}


void loop() {
  // put your main code here, to run repeatedly:
if(counter %2==0){
digitalWrite(LED1,LOW);
 LED2stat=!LED2stat;
  digitalWrite (LED2,LED2stat);
 }
else
digitalWrite(LED1,HIGH);

if(counter%4==0){
  LED3stat=!LED3stat;
  digitalWrite (LED3,LED3stat);
    }
if(counter%8==0){
  LED4stat=!LED4stat;
  digitalWrite (LED4,LED4stat);
    }

    
counter++;
if(counter>15)
counter =0;

}
