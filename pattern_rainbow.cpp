#include <Adafruit_NeoPixel.h>

// rainbow colors turning clockwise
void rainbow(Adafruit_NeoPixel* r_strip, Adafruit_NeoPixel* l_strip){
  
  int r_cntr = 32;
  int l_cntr = 0;

  do {
    r_strip->setPixelColor(r_cntr % 16, r_strip->Color(255,0,0));            //red
    r_strip->setPixelColor((r_cntr - 1) % 16, r_strip->Color(255,40,0));     //orange 1
    r_strip->setPixelColor((r_cntr - 2) % 16, r_strip->Color(255,127,0));    //orange 2
    r_strip->setPixelColor((r_cntr - 3) % 16, r_strip->Color(255,255,0));    //yellow
    r_strip->setPixelColor((r_cntr - 4) % 16, r_strip->Color(0,255,0));      //green
    r_strip->setPixelColor((r_cntr - 5) % 16, r_strip->Color(0,0,255));      //blue
    r_strip->setPixelColor((r_cntr - 6) % 16, r_strip->Color(35,0,230));     //purple
    r_strip->setPixelColor((r_cntr - 7) % 16, r_strip->Color(148,0,211));    //violet

    r_strip->setPixelColor((r_cntr - 8) % 16, r_strip->Color(255,0,0));      //red
    r_strip->setPixelColor((r_cntr - 9) % 16, r_strip->Color(255,40,0));     //orange 1
    r_strip->setPixelColor((r_cntr - 10) % 16, r_strip->Color(255,127,0));   //orange 2
    r_strip->setPixelColor((r_cntr - 11) % 16, r_strip->Color(255,255,0));   //yellow
    r_strip->setPixelColor((r_cntr - 12) % 16, r_strip->Color(0,255,0));     //green
    r_strip->setPixelColor((r_cntr - 13) % 16, r_strip->Color(0,0,255));     //blue
    r_strip->setPixelColor((r_cntr - 14) % 16, r_strip->Color(35,0,230));    //purple
    r_strip->setPixelColor((r_cntr - 15) % 16, r_strip->Color(148,0,211));   //violet
    
    l_strip->setPixelColor(l_cntr % 16, r_strip->Color(255,0,0));            //red
    l_strip->setPixelColor((l_cntr + 1) % 16, r_strip->Color(255,40,0));     //orange 1
    l_strip->setPixelColor((l_cntr + 2) % 16, r_strip->Color(255,127,0));    //orange 2
    l_strip->setPixelColor((l_cntr + 3) % 16, r_strip->Color(255,255,0));    //yellow
    l_strip->setPixelColor((l_cntr + 4) % 16, r_strip->Color(0,255,0));      //green
    l_strip->setPixelColor((l_cntr + 5) % 16, r_strip->Color(0,0,255));      //blue
    l_strip->setPixelColor((l_cntr + 6) % 16, r_strip->Color(35,0,230));     //purple
    l_strip->setPixelColor((l_cntr + 7) % 16, r_strip->Color(148,0,211));    //violet

    l_strip->setPixelColor((l_cntr + 8) % 16, r_strip->Color(255,0,0));      //red
    l_strip->setPixelColor((l_cntr + 9) % 16, r_strip->Color(255,40,0));     //orange 1
    l_strip->setPixelColor((l_cntr + 10) % 16, r_strip->Color(255,127,0));   //orange 2
    l_strip->setPixelColor((l_cntr + 11) % 16, r_strip->Color(255,255,0));   //yellow
    l_strip->setPixelColor((l_cntr + 12) % 16, r_strip->Color(0,255,0));     //green
    l_strip->setPixelColor((l_cntr + 13) % 16, r_strip->Color(0,0,255));     //blue
    l_strip->setPixelColor((l_cntr + 14) % 16, r_strip->Color(35,0,230));    //purple
    l_strip->setPixelColor((l_cntr + 15) % 16, r_strip->Color(148,0,211));   //violet
            
    r_strip->show();
    l_strip->show();
    r_cntr --;
    l_cntr ++;
    r_cntr == 16 ? r_cntr = 32 : true;
    l_cntr == 16 ? l_cntr = 0 : true;
    delay(70);
  } while (true);
}
