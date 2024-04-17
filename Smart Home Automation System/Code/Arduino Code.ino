char input = 'x';

void setup() 
{
   lcd.begin(16, 2);
   Serial.begin(9600);
   Serial.print("Input: ");
  
   
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT); 
   
   digitalWrite(3, HIGH);
   digitalWrite(4, HIGH); 
}

void loop() 
{
    
    if(Serial.available() > 0)
    {
      input = Serial.read();
      Serial.println(input);
    }
    
    switch(input)
    {
      case '0':digitalWrite(3, LOW);
               break;
      case '1':digitalWrite(3, HIGH);
               break;
      case '2':digitalWrite(4, LOW);
               break;
      case '3':digitalWrite(4, HIGH);
               break;
      case 'a':analogWrite(5, 225);
               break;         
      case 'b':analogWrite(5, 80);
               break;         
      case 'c':analogWrite(5, 0);
               break;
      case 'A':analogWrite(6, 255);
               break;
      case 'B':analogWrite(6, 80);
               break;   
      case 'C':analogWrite(6, 0);
               break;
      Default: digitalWrite(3, HIGH);
               digitalWrite(4, HIGH);
               digitalWrite(5, HIGH);
               digitalWrite(6, HIGH);
               break;               
     }
}