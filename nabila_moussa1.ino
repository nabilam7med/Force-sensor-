#include <LiquidCrystal_I2C.h>
//LiquidCrystal_I2C lod-LiquidCrystal_12C (0x27, 16, 2);
LiquidCrystal_I2C lcd(0x27,16,2);
int sensor=A0;
int value=0;
void setup(){
  Serial.begin(9600);
  pinMode(A0,INPUT);
lcd.init();
  lcd.backlight();}
  void loop(){
    value=analogRead(A0);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("reading = " );
 lcd.setCursor(0,1);
    lcd.print(value );
    delay(1000);
  }
