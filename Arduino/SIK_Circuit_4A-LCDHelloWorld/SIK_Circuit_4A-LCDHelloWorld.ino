/*
  SparkFun Inventor’s Kit
  Circuit 4A-HelloWorld

  The LCD will display the words "Hello World" and show how many seconds have passed since
  the RedBoard was last reset.

  This sketch was written by SparkFun Electronics, with lots of help from the Arduino community.
  This code is completely free for any use.

  View circuit diagram and instructions at: https://learn.sparkfun.com/tutorials/sparkfun-inventors-kit-experiment-guide---v41
  Download drawings and code at: https://github.com/sparkfun/SIK-Guide-Code
*/

#include <LiquidCrystal.h>          //the liquid crystal library contains commands for printing to the display

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);   // tell the RedBoard what pins are connected to the display

void setup() {

  lcd.begin(16, 2);                 //tell the lcd library that we are using a display that is 16 characters wide and 2 characters high
  lcd.clear();                      //clear the display
}


byte smileLeft[] = {
  B00001,
  B00001,
  B00001,
  B00010,
  B00110,
  B00100,
  B11000,
  B00000
};


byte smileRight[] = {
  B00000,
  B11000,
  B00100,
  B00110,
  B00010,
  B00001,
  B00001,
  B00001
};

byte eyeLeft[] = {
  B00000,
  B01100,
  B01100,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

byte eyeRight[] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B01100,
  B01100,
  B00000  
};

byte grinLeft[] = {
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b10001,
	0b01010,
	0b00100,
	0b00000
};

byte grinRight[] = {
  B00000,
  B00100,
  B01010,
  B10001,
  B00000,
  B00000,
  B00000,
  B00000
};


byte unLeft[] = {
    B00000,
  B00011,
  B00100,
  B01100,
  B01000,
  B10000,
  B10000,
  B10000
};

byte unRight[] = {
  B10000,
  B10000,
  B10000,
  B01000,
  B01100,
  B00100,
  B00011,
  B00000
};

byte chevRight[8] = {
	0b10001,
	0b01010,
	0b00100,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000
};


void loop() {
  //Create Characters
  lcd.createChar(0, smileLeft);
  lcd.createChar(1, smileRight);
  lcd.createChar(2, eyeLeft);
  lcd.createChar(3, eyeRight);
  lcd.createChar(4, grinLeft);
  lcd.createChar(5, grinRight);
  lcd.createChar(6, unLeft);  
  lcd.createChar(7, unRight); 
  
  //Smiley
  lcd.setCursor(0, 1);
  lcd.write((uint8_t)2);
  lcd.setCursor(0, 0);
  lcd.write((uint8_t)3);
  lcd.setCursor(1, 1);
  lcd.write((uint8_t)0); 
  lcd.setCursor(1, 0) ;
  lcd.write((uint8_t)1); 
  
  //Grining
  lcd.setCursor(3, 1);
  lcd.write((uint8_t)5); //EyeLeft

  lcd.setCursor(3, 0);
  lcd.write((uint8_t)4); //EyeRight

  lcd.setCursor(4, 1);
  lcd.write((uint8_t)0); //GrinRight

  lcd.setCursor(4, 0) ;
  lcd.write((uint8_t)1); //GrinLeft

  //Unhappy
  lcd.setCursor(6, 1);
  lcd.write((uint8_t)2); //EyeLeft

  lcd.setCursor(6, 0);
  lcd.write((uint8_t)3); //EyeRight

  lcd.setCursor(7, 1);
  lcd.write((uint8_t)7); //GrinRight

  lcd.setCursor(7, 0) ;
  lcd.write((uint8_t)6); //GrinLeft
}
