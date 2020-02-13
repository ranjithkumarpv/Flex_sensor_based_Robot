nmvoid setup() 
{
  ;
}
void loop() 
{
    int Value=analogRead(A0);// put your main code here, to run repeatedly:
   // Serial.println(Value);
    int Voltage=Value*(5.0/1023.0)*100;
    
   // Serial.println("Voltage1");
  //  Serial.println(Voltage);
    delay(100);
     int Value1=analogRead(A1);// put your main code here, to run repeatedly:
   // Serial.println(Value1);//
    int Voltage1=Value1*(5.0/1023.0)*100;
   
    //Serial.println("Voltage2");
    //Serial.println(Voltage1);
    delay(100);
    int Value2=analogRead(A2);// put your main code here, to run repeatedly:
    //Serial.println(Value2);
    int Voltage2=Value2*(5.0/1023.0)*100;
   
   // Serial.println("Voltage3");
   // Serial.println(Voltage2);
    delay(100);
     int Value3=analogRead(A3);// put your main code here, to run repeatedly:
   // Serial.println(Value3);
    int Voltage3=Value3*(5.0/1023.0)*100;
    if((Voltage>300)&&(Voltage<380))
    {
        Serial.println("F");  
    }
    else if(Voltage>430)
    {
        Serial.println("O");  
    }
    
    else if((Voltage1>70)&&(Voltage1<160))
    {
        Serial.println("R");  
    }
     else if(Voltage1>230)
    {
        Serial.println("C");  
    }
     else if((Voltage2>10)&&(Voltage2<100))
    {
        Serial.println("L");  
    }
    else if((Voltage3>10)&&(Voltage3<40))
    {
        Serial.println("B");  
    }
    else
    {
        Serial.println("S");   
    }
  //  Serial.println("Voltage4");
  //  Serial.println(Voltage3);
    delay(100);




}
