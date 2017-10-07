int NUM1 = 0;
int NUM2 = 0;
int op;
float ans;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()){
NUM1 = Serial.parseInt();
 op = Serial.read();
 NUM2= Serial.parseInt();
 switch (op){
    case ('*'):
    ans = NUM1 * NUM2;
     Serial.print("The anser is : ");
    Serial.println(ans);
    break;
    case ('+'):
    ans = NUM1 + NUM2;
     Serial.print("The anser is : ");
    Serial.println(ans);
    break;
    case ('-'):
    ans = NUM1 - NUM2;
     Serial.print("The anser is : ");
    Serial.println(ans);
    break;
    case ('/'):
    if(NUM2==0){
     Serial.println("can't divide over zero!!");
      }else{
    ans = (NUM1+0.00)/(NUM2+0.00);
     Serial.print("The anser is : ");
    Serial.println(ans);
    }
   
    break;
}}}

