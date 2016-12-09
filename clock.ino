#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

int sec = 0;  
int minute = 26; 
int hour = 17; 

void setup() {
  lcd.begin(16, 2);
  lcd.print("My Clock!");
}

void loop() {
 lcd.setCursor(0, 1);
 lcd.print(" ");
 lcd.print(hour);
 lcd.print(" : ");
  lcd.print(minute);
 if(minute > 59){
  minute = 0; 
  hour += 1;
 }
 lcd.print(" : ");
 lcd.print(sec);
 delay(1000);
 sec += 1;
 if(sec > 59){
  sec = 0; 
  minute += 1;
 }
 lcd.print("    ");
 
}
