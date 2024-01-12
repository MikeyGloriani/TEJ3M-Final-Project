// Created on: Jan 2024
// Created by: Mikey Gloriani
// This is a 2 bit adder with arduino


const int DIGIT_B2 = 6;
const int DIGIT_A2 = 5;
const int DIGIT_A1 = 4;
const int DIGIT_B1 = 3;

void setup()
{
  // setup serial output
  Serial.begin(9600);
  // set pin mode to output

  pinMode(DIGIT_A1, OUTPUT);
  pinMode(DIGIT_B1, OUTPUT);
  pinMode(DIGIT_A2, OUTPUT);
  pinMode(DIGIT_B2, OUTPUT);
  
  // set all pins to "0)
  digitalWrite(DIGIT_A1, 0); //LOW and HIGH just reference 0 & 1
  digitalWrite(DIGIT_B1, 0);
  digitalWrite(DIGIT_A2, 0); 
  digitalWrite(DIGIT_B2, 0);
  
  // loop over the inputs
  Serial.print("Starting ... \n\n");
  delay(1000); // Wait for 1000 millisecond(s)
   for (int twosA = 0; twosA <= 1; ++twosA) {
    digitalWrite(DIGIT_A2, twosA);
     for (int twosB = 0; twosB <= 1; ++twosB) {
      digitalWrite(DIGIT_B2, twosB);
     for (int onesA = 0; onesA <= 1; ++onesA) {
      digitalWrite(DIGIT_A1, onesA);
       for (int onesB = 0; onesB <= 1; ++onesB) {
        digitalWrite(DIGIT_B1, onesB);


      Serial.print("A2 = " + String(twosA) + "\n");
      Serial.print("A1 = " + String(onesA) + "\n");
      Serial.print("B2 = " + String(twosB) + "\n");
      Serial.print("B1 = " + String(onesB) + "\n");
      Serial.print(String(onesA) + " + " + String(twosA) + " + " + String(onesB) + " + " + String(twosB) + " = " + String(onesA + onesB + twosB + twosA) + "\n\n");
      delay(3500); // Wait for 2000 millisecond(s)
         }
       }
     }
   }
 } 

void loop()
{
  // Done
  Serial.print("\nDone. \n");
  delay(10000); // Wait for 10000 millisecond(s)
}
