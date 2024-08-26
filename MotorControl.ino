// C++ code
//Motor control
int p=10,n=11;
void setup (){

pinMode (p, OUTPUT) ;
pinMode (n, OUTPUT) ;
}
void loop()
{

analogWrite(p,120); //255 output voltage maximum=5v,
analogWrite (n, 0);//0 output voltage lowest=0v
delay (2000) ;
analogWrite (p,0);
analogWrite(n,120);// (120/255)*5=2.66v
delay(2000);
}