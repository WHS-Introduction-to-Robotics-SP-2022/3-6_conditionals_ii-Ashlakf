int analogPin =A0;
int val=0;
int red=11;
int green=10;
int blue=9;

void setup()
{
  Serial.begin(9600);
  pinMode(analogPin,INPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
   analogRead(analogPin);
  Serial.println(val);
  delay(50);
}

void loop()
{val = analogRead(analogPin);
  Serial.println(val);
  delay(50);
  if (val<146 && val>0 ){
    analogWrite(red,255);
    analogWrite(green,0);
    analogWrite(blue,0);
  }
   else if (val<292 && val>146){
    analogWrite(red,255);
    analogWrite(green,110);
    analogWrite(blue,0);
  }
  else if (val<438 && val>292){
    analogWrite(red,255);
    analogWrite(green,255);
    analogWrite(blue,0);
  }
  else if(val<584 && val>438){
    analogWrite(red,0);
    analogWrite(green,255);
    analogWrite(blue,0);
  }
  else if(val<730 && val>584){
    analogWrite(red,0);
    analogWrite(green,0);
    analogWrite(blue,255);
  }
  else if(val<877 && val>730){
    analogWrite(red,150);
    analogWrite(green,0);
    analogWrite(blue,255);
  }
  else if(val<1023 && val>877){
    analogWrite(red,255);
    analogWrite(green,0);
    analogWrite(blue,255);
  }
  
}
