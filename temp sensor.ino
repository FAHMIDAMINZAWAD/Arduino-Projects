int temp_pin= A0;

int buzzer_pin=7;

void setup(){

Serial.begin(9600);
  pinMode(buzzer_pin,OUTPUT);


}

void loop(){

int temp=temperature();
  
  Serial.println(temp);
  if(temp>100||temp<-10){
  
  digitalWrite(buzzer_pin,HIGH);
  
  }
  else {
     
  digitalWrite(buzzer_pin,LOW);
  
  }

}
int temperature(){
  
 int t=analogRead(temp_pin);
  return map(t,20,358,-40,125);
  
  
}