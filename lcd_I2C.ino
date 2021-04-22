#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2); 
           //ou bien  0x3F,20,4
void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.backlight();
}


void loop()
{
    lcd.print("ELECTROCODEUR");
}
