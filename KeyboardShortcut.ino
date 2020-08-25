#include "Keyboard.h"
#include "HID.h"

char Ctrl = KEY_RIGHT_CTRL;
char Shift = KEY_RIGHT_SHIFT;
char Alt = KEY_RIGHT_ALT;
char Windows = KEY_RIGHT_GUI;
char PageUp = KEY_PAGE_UP;
char PageDown = KEY_PAGE_DOWN;
void setup() 
{
  pinMode(6, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() 
{
  Keyboard.begin();
  if (digitalRead(6)  == 1) {
  Keyboard.press(Ctrl);
  Keyboard.write(PageUp);
  Keyboard.releaseAll();
  delay(250);  
  }
  else if (digitalRead(5) == 1) {
  Keyboard.press(Ctrl);
  Keyboard.write(PageDown);
  Keyboard.releaseAll();
  delay(250);
  }  
  else if (digitalRead(4) == 1) {
  Keyboard.press(Windows);
  Keyboard.write('d');
  Keyboard.releaseAll();
  delay(250);
  }  
  else if (digitalRead(3) == 1) {
  Keyboard.press(Ctrl);
  Keyboard.write('c');
  Keyboard.releaseAll();
  delay(250);
  }  
  else if (digitalRead(2) == 1) {
  Keyboard.press(Ctrl);
  Keyboard.write('v');
  Keyboard.releaseAll();
  delay(250);
  }  
  Keyboard.end();
}
