#include <Keyboard.h> // The main library for sending keystrokes.

void setup() 
{
 Keyboard.begin();  // Initialise the library.
}

// Loop around waiting for a button press on pin 2.
// When the button is pressed, go to the function triggerAutomation.
void loop() 
{
  if(digitalRead(2) == HIGH)
  {
    triggerAutomation();    
  }
}

void triggerAutomation()
{
  Keyboard.print("0000");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
  //
  Keyboard.print("1234");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
  //
  Keyboard.print("9999");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
  //
  Keyboard.print("9876");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);                    
  //
  Keyboard.print("9090");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}
