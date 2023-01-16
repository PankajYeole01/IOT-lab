
int LED=13
void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  DigitalWrite(LED,HIGH);
  delay(1000)
  DigitalRead(LED,LOW);
  delay(1000)

}
