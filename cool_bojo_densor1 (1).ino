#include <LiquidCrystal.h> 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
  
void setup()
{
  lcd.begin(25, 2); 
}

void loop() 
 {
  for (int f=0; f<25; f++)
   {
   lcd.setCursor(f, 0);
     lcd.print("The next station is Tverskaya square");
     delay(500);
    lcd.print("is Tverskaya square");
    lcd.clear();
   }   
}