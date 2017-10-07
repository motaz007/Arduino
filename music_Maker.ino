
#define SOUND_PIN 5
#define NOTE_CS5 554
#define NOTE_C6  1047
#define NOTE_DS8 4978
#define NOTE_A7  3520
#define NOTE_FS6 1480
#define NOTE_AS6 1865
 unsigned long saver=0;
int SENT;
int REC=0;
 unsigned long S;
int number=0;
int i=0;
int notes[20];
int Back [20];
void setup() {
  // put your setup code here, to run once:



Serial.begin(9600);
pinMode(SOUND_PIN,OUTPUT);
}

void select(int N){
  switch(N)
  {case 1:tone (SOUND_PIN,NOTE_CS5,1000);
          delay(1000);
          break;
    case 2:tone (SOUND_PIN,NOTE_C6,1000);
          delay(1000);
          break;
          case 3:tone (SOUND_PIN,NOTE_DS8,1000);
          delay(1000);
          break;
          case 4:tone (SOUND_PIN,NOTE_A7,1000);
          delay(1000);
          break;
    case 5:tone (SOUND_PIN,NOTE_AS6,1000);
          delay(1000);
          break;
case 6:tone (SOUND_PIN,NOTE_FS6,1000);
          delay(1000);
          break;    
    }
  
  }

  void select1(int N){
  switch(N)
  {case 1:tone (SOUND_PIN,NOTE_CS5,250);
          delay(250);
          break;
    case 2:tone (SOUND_PIN,NOTE_C6,250);
          delay(250);
          break;
          case 3:tone (SOUND_PIN,NOTE_DS8,250);
          delay(250);
          break;
          case 4:tone (SOUND_PIN,NOTE_A7,250);
          delay(250);
          break;
    case 5:tone (SOUND_PIN,NOTE_AS6,250);
          delay(250);
          break;
case 6:tone (SOUND_PIN,NOTE_FS6,250);
          delay(250);
          break;    
    }
  
  }

  int NUM (int N){
    int n=0;
    for(0;N>0;){
      N = N/10;
      n++;
      
      }
      return n ;
    }
void loop() {
  // put your main code here, to run repeatedly:

if(Serial.available()>0){
   SENT = Serial.parseInt();
   Serial.println(SENT);
 notes[i] = Back[i];
  if(SENT==8){
    REC=0;
    }
   else if(REC==1){
     notes[i]=SENT;
    Back[i]=notes[i];
        i++;


      }
else if (SENT==7){
 notes[20] ={};
    Back[20]={};
    REC=1;
    i=0;
  
  }   
  else if (SENT==9){
    for(int j=0;j<(20-i-1);j++){

      select1(notes[j]);
      }
    }
   select(SENT);
  
}
bb  }
