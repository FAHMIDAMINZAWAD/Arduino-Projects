// C++ code
//LDR Sensor

int light=9;
void setup (){

Serial.begin(9600);
 
pinMode (light, OUTPUT);
  
}
void loop (){

int resistance=analogRead(A0);
Serial.println(resistance);
if (resistance<400) {
digitalWrite (light, HIGH);
delay (1000);
  
}

else{
digitalWrite(light,LOW);

}
}
  
//1023=5v
//(511/1023)*5=2.5v
//(256/1023)*5=1.25