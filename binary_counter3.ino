int count = 0;
void setup() {
  // put your setup code here, to run once:
// using the AVR native language of arduino microcomtroller.
}

void loop() {
  // put your main code here, to run repeatedly:
PORTD = count;
count=count +4;
if (count >124)
  count=0;
}
