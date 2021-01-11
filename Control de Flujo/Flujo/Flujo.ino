int LED=13;
int led=9;
int x=2;
int lectura;
void setup() {
pinMode(LED, OUTPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}
void loop() {
lectura = analogRead(0); 
Serial.print(lectura); 
delay(500);
if(lectura<1000 && x==2)
{
  digitalWrite(LED,HIGH);
  digitalWrite(9,HIGH);
delay (500);
   digitalWrite(9,LOW);
   delay (500);
    }
if(lectura>1000)
  {
    digitalWrite(LED,LOW);
    digitalWrite(9,LOW);
    x=1;
    }
 if(lectura<500 && x==1)
 {
  digitalWrite(LED,HIGH);
  digitalWrite(9,HIGH);
delay (300);
   digitalWrite(9,LOW);
   delay (300);
   x=0; 
 }
 if (lectura>500 && x==0)
 {
  digitalWrite(LED,HIGH);
  digitalWrite(9,HIGH);
delay (100);
   digitalWrite(9,LOW);
   delay (100);
 }
}
