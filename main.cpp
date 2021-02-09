#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

/* Include Neopixel Pattern */
#include "pattern_rainbow.h"
#include "pattern_wink.h"

#define LEFT_PIN 17
#define RIGHT_PIN 16

Adafruit_NeoPixel r_strip = Adafruit_NeoPixel(16, LEFT_PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel l_strip = Adafruit_NeoPixel(16, RIGHT_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
  #if defined (__AVR_ATtiny85__)
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
  #endif
  // End of trinket special code

  r_strip.begin();
  l_strip.begin();
  r_strip.setBrightness(30);
  l_strip.setBrightness(30);
  
  // Initialize all pixels to 'off'
  r_strip.show(); 
  l_strip.show();
}

// makes color declaration a bit prittier
uint32_t rgb(int r, int g, int b) {
  return l_strip.Color(r, g, b);
}

// main event loop
void loop() {
  rainbow(&r_strip, &l_strip);
  //wink(&r_strip, &l_strip, rgb(0, 255, 0));
}
