# Reva-hack
<h3> Remote health monitoring system </h3>
<h4> ARDUINO CODE FOR TEMPERATURE SENSOR </h4>
<br>float tempc;
<br>float tempf;
<br>float adc_value;
<br>void setup()
<br>{
  <br>pinMode(A0,INPUT);
  <br>pinMode(11,OUTPUT);
  <br>Serial.begin(9600);
<br>}
<br>void loop()
<br>{
  <br>adc_value=analogRead(A0);
  <br>tempc=(adc_value*500)/1024;
  <br>tempf=(tempc*1.8)+32;
  <br>Serial.print("Temperature in degreeC = ");
  <br>Serial.print("\t");
  <br>Serial.print(tempc);
  <br>Serial.println();
  <br>Serial.print("Temperature in Farenheit = ");
  <br>Serial.print("\t");
  <br>Serial.print(tempf);
  <br>Serial.println();
  <br>if(tempf>95)
  <br>{
    <br>digitalWrite(11,HIGH);
  <br>}
  <br>if(tempf<95)
  <br>{
    <br>digitalWrite(11,LOW);
  <br>}
  <br>delay(1000);
}</br>
