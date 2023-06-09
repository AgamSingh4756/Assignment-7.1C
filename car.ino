char m=0;
void setup() 
{
  pinMode(9, OUTPUT);  
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  Serial.begin(9600);
}
void loop() 
{   
  if (Serial.available()>0)
  {
    char m=Serial.read();
    Serial.println(m);
     
    if (m=='R')
    {
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);  

      delay(100);   
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);    
    }
    else if (m=='L')
    {
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      
      delay(100);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);   
    }
    else if (m=='F')
    {
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      
      delay(100);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);   
    }
    else if (m=='B')
    {
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      
      delay(100);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);   
    }
    else if (m=='S')     
    {
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
       
    }
  }
  Serial.println("K");
  delay(500);
}
