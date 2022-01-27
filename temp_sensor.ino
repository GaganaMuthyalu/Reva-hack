float tempc;
float tempf;
float adc_value;
void setup()
{
  pinMode(A0,INPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  adc_value=analogRead(A0);
  tempc=(adc_value*500)/1024;
  tempf=(tempc*1.8)+32;
  Serial.print("Temperature in degreeC = ");
  Serial.print("\t");
  Serial.print(tempc);
  Serial.println();
  Serial.print("Temperature in Farenheit = ");
  Serial.print("\t");
  Serial.print(tempf);
  Serial.println();
  if(tempf>95)
  {
    digitalWrite(11,HIGH);
    
  }
  if(tempf<95)
  {
    digitalWrite(11,LOW);
  }
  delay(1000);
}
