#ifndef BRIGHTNESS_H
#define BRIGHTNESS_H

class Brightness {
  public:
    Brightness(int);
    void setBrightness(int);
    int getBrightness();
  private:
    int _brightness;  
};

#endif
