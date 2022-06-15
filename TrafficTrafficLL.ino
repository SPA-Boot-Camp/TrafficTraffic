int led1 =4;
int led2 =2;
int led3 =1;
void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  
}
void loop()
  
{
  redLED();
  yellowLED();
  greenLED();
}

void redLED()
{
  digitalWrite(led1,HIGH);
  delay(5000);
  digitalWrite(led1,LOW);
  delay(5000);
  
}

void yellowLED()

{
   digitalWrite(led2,HIGH);
  delay(3000);
  digitalWrite(led2,LOW);
  delay(3000);
}
void greenLED()
{
   digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led3,LOW);
  delay(1000);
}
  
