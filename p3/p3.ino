/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int A = 1;          // donar nom al pin 5 de l’Arduino
const int B= 2;          // donar nom al pin 6 de l’Arduino
const int C= 3;  
const int D= 4;          // donar nom al pin 7 de l’Arduino
const int E= 5;          // donar nom al pin 8 de l’Arduino
const int F= 6;          // donar nom al pin 9 de l’Arduino
const int G= 7;          // donar nom al pin 9 de l’Arduino

unsigned int temps=1000; 

//********** Setup ****************************************************************
void setup()
{
  pinMode(A, OUTPUT);     
  pinMode(B, OUTPUT);     
  pinMode(C, OUTPUT);     
  pinMode(D, OUTPUT);     
  pinMode(E, OUTPUT);     
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);     

}

void loop()
{
  digitalWrite(A, HIGH);    
  digitalWrite(B, LOW);   
  digitalWrite(C, HIGH);    
  digitalWrite(D, LOW);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, LOW);   
  digitalWrite(G, LOW);   

  delay (temps);

  digitalWrite(A, HIGH);    
  digitalWrite(B, HIGH);   
  digitalWrite(C, HIGH);    
  digitalWrite(D, LOW);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, HIGH);   
  digitalWrite(G, HIGH);   

  delay (temps);

  digitalWrite(A, LOW);    
  digitalWrite(B, HIGH);   
  digitalWrite(C, HIGH);    
  digitalWrite(D, LOW);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, HIGH);   
  digitalWrite(G, HIGH);   

  delay (temps);

  digitalWrite(A, LOW);    
  digitalWrite(B, LOW);   
  digitalWrite(C, LOW);    
  digitalWrite(D, LOW);    
  digitalWrite(E, LOW);    
  digitalWrite(F, LOW);   
  digitalWrite(G, LOW);  

  delay (temps);

  digitalWrite(A, LOW);    
  digitalWrite(B, LOW);   
  digitalWrite(C, HIGH);    
  digitalWrite(D, HIGH);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, HIGH);   
  digitalWrite(G, HIGH);  

  delay (temps);

  digitalWrite(A, HIGH);    
  digitalWrite(B, LOW);   
  digitalWrite(C, LOW);    
  digitalWrite(D, HIGH);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, HIGH);   
  digitalWrite(G, HIGH);  

  delay (temps);

  digitalWrite(A, HIGH);    
  digitalWrite(B, LOW);   
  digitalWrite(C, HIGH);    
  digitalWrite(D, HIGH);    
  digitalWrite(E, LOW);    
  digitalWrite(F, HIGH);   
  digitalWrite(G, HIGH);  

  delay (temps);

  digitalWrite(A, HIGH);    
  digitalWrite(B, HIGH);   
  digitalWrite(C, HIGH);    
  digitalWrite(D, HIGH);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, HIGH);   
  digitalWrite(G, LOW);  

  delay (temps);

  digitalWrite(A, LOW);    
  digitalWrite(B, LOW);   
  digitalWrite(C, LOW);    
  digitalWrite(D, LOW);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, LOW);   
  digitalWrite(G, HIGH);  

  delay (temps);

  digitalWrite(A, HIGH);    
  digitalWrite(B, HIGH);   
  digitalWrite(C, HIGH);    
  digitalWrite(D, LOW);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, HIGH);   
  digitalWrite(G, HIGH); 

  delay (temps);

}
