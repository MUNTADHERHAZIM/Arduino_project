#include <Servo.h>

Servo myservo;  

int pos = 0;    

void setup() {
  myservo.attach(9); 

void loop()
{
    for (pos = 0; pos <= 180; pos += 1) // change here in the place 0 and 180 , into any two degrees you wish the servo to sweep.
    { 
    
     myservo.write(pos);              
     delay(15);                      
    }
    
    for (pos = 180; pos >= 0; pos -= 1)  // change here also  in the place 0 and 180 , into any two degrees you wish the servo to sweep.
    { 
     myservo.write(pos);              
     delay(15);                       
    }
}

