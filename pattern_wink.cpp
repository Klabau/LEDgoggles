#include <Adafruit_NeoPixel.h>
#include "brightness.h"

// show color and wink every now and again
void wink(Adafruit_NeoPixel* r_strip, Adafruit_NeoPixel* l_strip, Brightness* brightness){

  uint32_t c_off = l_strip->Color(0, 0, 0);
  //uint32_t color = l_strip->Color(0, brightness->getBrightness(), 0);
  
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
  
  l_strip->setPixelColor(4, l_strip->Color(0, brightness->getBrightness(), 0));
  l_strip->setPixelColor(12, l_strip->Color(0, brightness->getBrightness(), 0));

  r_strip->setPixelColor(4, l_strip->Color(0, brightness->getBrightness(), 0));
  r_strip->setPixelColor(12, l_strip->Color(0, brightness->getBrightness(), 0));

  l_strip->show();
  r_strip->show();
  delay(30);

  l_strip->setPixelColor(3, l_strip->Color(0, brightness->getBrightness(), 0));
  l_strip->setPixelColor(13, l_strip->Color(0, brightness->getBrightness(), 0));  
  l_strip->setPixelColor(5, l_strip->Color(0, brightness->getBrightness(), 0));
  l_strip->setPixelColor(11, l_strip->Color(0, brightness->getBrightness(), 0));

  r_strip->setPixelColor(3, l_strip->Color(0, brightness->getBrightness(), 0));
  r_strip->setPixelColor(13, l_strip->Color(0, brightness->getBrightness(), 0));  
  r_strip->setPixelColor(5, l_strip->Color(0, brightness->getBrightness(), 0));
  r_strip->setPixelColor(11, l_strip->Color(0, brightness->getBrightness(), 0));
  
  l_strip->show();
  r_strip->show();
  delay(30);

  l_strip->setPixelColor(2, l_strip->Color(0, brightness->getBrightness(), 0));
  l_strip->setPixelColor(14, l_strip->Color(0, brightness->getBrightness(), 0));  
  l_strip->setPixelColor(6, l_strip->Color(0, brightness->getBrightness(), 0));
  l_strip->setPixelColor(10, l_strip->Color(0, brightness->getBrightness(), 0));

  r_strip->setPixelColor(2, l_strip->Color(0, brightness->getBrightness(), 0));
  r_strip->setPixelColor(14, l_strip->Color(0, brightness->getBrightness(), 0));  
  r_strip->setPixelColor(6, l_strip->Color(0, brightness->getBrightness(), 0));
  r_strip->setPixelColor(10, l_strip->Color(0, brightness->getBrightness(), 0));
  
  l_strip->show();
  r_strip->show();
  delay(40);  
  
  l_strip->setPixelColor(0, l_strip->Color(0, brightness->getBrightness(), 0));
  l_strip->setPixelColor(15, l_strip->Color(0, brightness->getBrightness(), 0));
  l_strip->setPixelColor(1, l_strip->Color(0, brightness->getBrightness(), 0));  
  l_strip->setPixelColor(7, l_strip->Color(0, brightness->getBrightness(), 0));
  l_strip->setPixelColor(8, l_strip->Color(0, brightness->getBrightness(), 0));
  l_strip->setPixelColor(9, l_strip->Color(0, brightness->getBrightness(), 0));
  
  r_strip->setPixelColor(0, l_strip->Color(0, brightness->getBrightness(), 0));
  r_strip->setPixelColor(15, l_strip->Color(0, brightness->getBrightness(), 0));
  r_strip->setPixelColor(1, l_strip->Color(0, brightness->getBrightness(), 0));  
  r_strip->setPixelColor(7, l_strip->Color(0, brightness->getBrightness(), 0));
  r_strip->setPixelColor(8, l_strip->Color(0, brightness->getBrightness(), 0));
  r_strip->setPixelColor(9, l_strip->Color(0, brightness->getBrightness(), 0));

  l_strip->show();
  r_strip->show();
}
