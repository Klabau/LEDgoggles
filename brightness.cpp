#include "Arduino.h"
#include "brightness.h"

Brightness::Brightness(int brightness) {
  _brightness = brightness;  
}

void Brightness::setBrightness(int newBrightness) {
  _brightness = newBrightness;
}

int Brightness::getBrightness() {
  return _brightness;
}
