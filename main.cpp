// DOIT ESP32 DEVKIT V1
// Adafruit Trinket M0

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

/* Include Neopixel Pattern */
#include "pattern_rainbow.h"
#include "pattern_wink.h"
#include "brightness.h"

/* Define Pins */
#define LEFT_PIN 0          // Left LED Ring
#define RIGHT_PIN 4         // Right LED Ring
#define BTN_MODE 1          // pattern mode button 
#define BTN_BRIGHTNESS 3    // brightness button

int btnPatternStatus = LOW;
int btnBrightnessStatus = LOW;

int cntrPattern = 0;        // counts pattern mode
int cntrBrightness = 0;     // counts brightness mode from 1 to 5
//int brightness = 20;
Brightness brightness(20);

Adafruit_NeoPixel r_strip = Adafruit_NeoPixel(16, LEFT_PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel l_strip = Adafruit_NeoPixel(16, RIGHT_PIN, NEO_GRB + NEO_KHZ800);

// makes color declaration a bit prittier
uint32_t rgb(int r, int g, int b) {
  return l_strip.Color(r, g, b);
}

// Interrupt method
void toggleBrightness() {
  brightness.getBrightness() == 240 ? brightness.setBrightness(20) : brightness.setBrightness(brightness.getBrightness() + 20);
}

void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
#if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
  // End of trinket special code

  // Serial.begin(9600);
  pinMode(BTN_MODE, INPUT);         // sets button input pin with pull-up resistor
  pinMode(BTN_BRIGHTNESS, INPUT);   // sets button input pin with pull-up resistor

  attachInterrupt(digitalPinToInterrupt(BTN_BRIGHTNESS), toggleBrightness, CHANGE);

  r_strip.begin();
  l_strip.begin();
  r_strip.setBrightness(brightness.getBrightness());
  l_strip.setBrightness(brightness.getBrightness());

  // Initialize all pixels to 'off'
  r_strip.show();
  l_strip.show();
}

// main event loop
void loop() {

  btnPatternStatus = digitalRead(BTN_MODE);
  if (btnPatternStatus == HIGH) {
    cntrPattern = (cntrPattern + 1) % 5;
    delay(1);
  }

/*  btnBrightnessStatus = digitalRead(BTN_BRIGHTNESS);
  if (btnBrightnessStatus == HIGH) {
    cntrBrightness = (cntrBrightness + 1) % 5;

    switch (cntrBrightness) {

      case 0: brightness = 20; break;
      case 1: brightness = 50; break;
      case 2: brightness = 90; break;
      case 3: brightness = 150; break;
      case 4: brightness = 250; break;
      
      case 0: brightness.setBrightness(20); break;
      case 1: brightness.setBrightness(50); break;
      case 2: brightness.setBrightness(90); break;
      case 3: brightness.setBrightness(150); break;
      case 4: brightness.setBrightness(250); break; 
    }

    r_strip.setBrightness(brightness.getBrightness());
    l_strip.setBrightness(brightness.getBrightness());
    delay(1);
  }*/

  //rainbow(&r_strip, &l_strip);
  wink(&r_strip, &l_strip, &brightness);
}
