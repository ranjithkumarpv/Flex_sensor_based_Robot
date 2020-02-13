//#include <dht.h>

//dht DHT11;
//#define DHT11_PIN A0

void setup() 
{
 
  pinMode(2, OUTPUT); 
  pinMode(4, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT); 
 // pinMode(3, INPUT);
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  //pinMode(7, INPUT);
 // pinMode(8, INPUT);
//  pinMode(6, OUTPUT);
//  pinMode(7, OUTPUT);

  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  //digitalWrite(5,LOW);
 // digitalWrite(6,LOW);
   
}

void loop()
{
    int inByte;
    Serial.println(inByte);
    if (Serial.available() > 0)
    {
          inByte = Serial.read();
         
          
        if(inByte=='F')
        {
          digitalWrite(2,HIGH);
          digitalWrite(4,LOW);
          digitalWrite(12,HIGH);
          digitalWrite(13,LOW);
         
        }  
       else if(inByte=='L')
       {
          digitalWrite(2,HIGH);
          digitalWrite(4,LOW);
          digitalWrite(12,LOW);
          digitalWrite(13,HIGH);
        
       }
        else if(inByte=='R')
       {
          digitalWrite(2,LOW);
          digitalWrite(4,HIGH);
          digitalWrite(12,HIGH);
          digitalWrite(13,LOW);
          /*delay(3000);
          digitalWrite(2,LOW);
          digitalWrite(4,LOW);
          digitalWrite(12,LOW);
          digitalWrite(13,LOW);*/        
       }
       else if(inByte=='B')
       {
          digitalWrite(2,LOW);
          digitalWrite(4,HIGH);
          digitalWrite(12,LOW);
          digitalWrite(13,HIGH);
          /*delay(3000);
          digitalWrite(2,LOW);
          digitalWrite(4,LOW);
          digitalWrite(12,LOW);
          digitalWrite(13,LOW); */       
       }
       else if(inByte=='O')
       {
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
        
          /*digitalWrite(2,LOW);
          digitalWrite(4,LOW);
          digitalWrite(12,LOW);
          digitalWrite(13,LOW); */       
       }
       else if(inByte=='C')
       {
          digitalWrite(5,HIGH);
          digitalWrite(6,LOW);
         
          /*delay(3000);
          digitalWrite(2,LOW);
          digitalWrite(4,LOW);
          digitalWrite(12,LOW);
          digitalWrite(13,LOW); */       
       }
       else if(inByte=='S')
       {
         digitalWrite(2,LOW);
          digitalWrite(4,LOW);
          digitalWrite(12,LOW);
          digitalWrite(13,LOW); 
          digitalWrite(5,LOW);
          digitalWrite(6,LOW);
       }
      
    }
    
     
}



