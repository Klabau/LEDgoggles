#include <Adafruit_NeoPixel.h>

// show color and wink every now and again
void wink(Adafruit_NeoPixel* r_strip, Adafruit_NeoPixel* l_strip, uint32_t color){

  uint32_t c_off = l_strip->Color(0, 0, 0);
  
  delay(random(3000, 10000));
  
  l_strip->setPixelColor(0, c_off);
  l_strip->setPixelColor(15, c_off);
  l_strip->setPixelColor(1, c_off);  
  l_strip->setPixelColor(7, c_off);
  l_strip->setPixelColor(8, c_off);
  l_strip->setPixelColor(9, c_off);
  
  r_strip->setPixelColor(0, c_off);
  r_strip->setPixelColor(15, c_off);
  r_strip->setPixelColor(1, c_off);  
  r_strip->setPixelColor(7, c_off);
  r_strip->setPixelColor(8, c_off);
  r_strip->setPixelColor(9, c_off);

  l_strip->show();
  r_strip->show();
  delay(40);

  l_strip->setPixelColor(2, c_off);
  l_strip->setPixelColor(14, c_off);  
  l_strip->setPixelColor(6, c_off);
  l_strip->setPixelColor(10, c_off);

  r_strip->setPixelColor(2, c_off);
  r_strip->setPixelColor(14, c_off);  
  r_strip->setPixelColor(6, c_off);
  r_strip->setPixelColor(10, c_off);
  
  l_strip->show();
  r_strip->show();
  delay(30);

  l_strip->setPixelColor(3, c_off);
  l_strip->setPixelColor(13, c_off);  
  l_strip->setPixelColor(5, c_off);
  l_strip->setPixelColor(11, c_off);
  
  r_strip->setPixelColor(3, c_off);
  r_strip->setPixelColor(13, c_off);  
  r_strip->setPixelColor(5, c_off);
  r_strip->setPixelColor(11, c_off);
  
  l_strip->show();
  r_strip->show();
  delay(30);

  l_strip->setPixelColor(4, c_off);
  l_strip->setPixelColor(12, c_off);
  
  r_strip->setPixelColor(4, c_off);
  r_strip->setPixelColor(12, c_off);

  l_strip->show();
  r_strip->show();
  delay(20);
  
  l_strip->setPixelColor(4, color);
  l_strip->setPixelColor(12, color);

  r_strip->setPixelColor(4, color);
  r_strip->setPixelColor(12, color);

  l_strip->show();
  r_strip->show();
  delay(30);

  l_strip->setPixelColor(3, color);
  l_strip->setPixelColor(13, color);  
  l_strip->setPixelColor(5, color);
  l_strip->setPixelColor(11, color);

  r_strip->setPixelColor(3, color);
  r_strip->setPixelColor(13, color);  
  r_strip->setPixelColor(5, color);
  r_strip->setPixelColor(11, color);
  
  l_strip->show();
  r_strip->show();
  delay(30);

  l_strip->setPixelColor(2, color);
  l_strip->setPixelColor(14, color);  
  l_strip->setPixelColor(6, color);
  l_strip->setPixelColor(10, color);

  r_strip->setPixelColor(2, color);
  r_strip->setPixelColor(14, color);  
  r_strip->setPixelColor(6, color);
  r_strip->setPixelColor(10, color);
  
  l_strip->show();
  r_strip->show();
  delay(40);  
  
  l_strip->setPixelColor(0, color);
  l_strip->setPixelColor(15, color);
  l_strip->setPixelColor(1, color);  
  l_strip->setPixelColor(7, color);
  l_strip->setPixelColor(8, color);
  l_strip->setPixelColor(9, color);
  
  r_strip->setPixelColor(0, color);
  r_strip->setPixelColor(15, color);
  r_strip->setPixelColor(1, color);  
  r_strip->setPixelColor(7, color);
  r_strip->setPixelColor(8, color);
  r_strip->setPixelColor(9, color);

  l_strip->show();
  r_strip->show();
}
