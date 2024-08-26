int red=13;
  int blue=12;
  int green=11;
    
void setup()
{
 
  pinMode(red,OUTPUT);
   pinMode(blue,OUTPUT);
   pinMode(green,OUTPUT);
  
}

void loop()
{
 
  rbgBlink();
  yellow();
  
}

void rbgBlink()
{
  
  
  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  delay(1000);
  
  digitalWrite(blue,HIGH);
  delay(1000); 
  digitalWrite(blue,LOW);
  delay(1000);
  
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(green,LOW);
  delay(1000);

}
  
  
void yellow(){
  
   
  digitalWrite(red, HIGH);
 
  digitalWrite(green,HIGH);
  delay(2000);
  
  digitalWrite(red, LOW);
 
  digitalWrite(green,LOW);
  delay(2000);
  
  
  
  
}


  
  


