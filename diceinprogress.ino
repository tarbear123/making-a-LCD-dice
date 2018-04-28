#include <"DFRkeypad.h">
#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
const char* DFRkeypad::sKEY[]=                          { "---",       "Right",   "Up", "Down", "Left", "Select", "???" };
const int DFRkeypad::iARV_VALUES[DFRkeypad::eNUM_KEYS]= { 1023,        0,         143,  328,    504,     740,      -1   };
int btnSELECT;

 
void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(1, 0);
  lcd.print("Roll the dice!");
}

void loop() {
while (btnSELECT == 0){

  delay (50);
  buttonState = analogRead(btnSELECT);
}


 case btnSELECT:
     {
     lcd.print("Rolling dice");
       diceOne = random(1, 7);
       diceTwo = random(1, 7);
     break;
     }
}

  
 if((diceOne + diceTwo > 1) && (diceOne + diceTwo <= 7));
  lcd.print(diceOne + diceTwo);
 if (diceOne + diceTwo = 7);
  lcd print ("The Pirate");
 
}
