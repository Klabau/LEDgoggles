

#include <Adafruit_NeoPixel.h>
#define LED_PIN 2 
#define LED_COUNT 32
int wait = 50;  // normal 50

#define BUTTON4 4                                                // Pin, an dem der Taster Lichtmodus angeschlossen ist.
int lichtmodus = 0;                                                 // counts the mode by button
int taster4Status = LOW;

#define BUTTON6 6                                                // Pin, an dem der Taster Helligkeit angeschlossen ist.
int level = 0;            // helligkeits level counter
int helligkeit = 1;                                                 // Starthelligkeit, zählt helligkeitsstufen
int taster6Status = LOW;


Adafruit_NeoPixel ring(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
void setup() {

ring.begin();
ring.show();


Serial.begin(9600);
pinMode(BUTTON4, INPUT);                                // Pin, an dem der Taster angeschlossen ist, als Eingang mit aktiviertem Pull-Up-Widerstand festlegen.
pinMode(BUTTON6, INPUT);    
}

void loop() {
Serial.print("lichtmodus: "); Serial.print(lichtmodus); Serial.print("   helligkeit: "); Serial.print(helligkeit); Serial.print("   level: "); Serial.println(level);

  
 taster4Status = digitalRead(BUTTON4);
 if (taster4Status == HIGH) {
  lichtmodus = (lichtmodus+1) % 5;
  delay(1);}

 taster6Status = digitalRead(BUTTON6);
 if (taster6Status == HIGH) {
  level = (level+1) % 5;
     if (level == 0) {helligkeit = 20;}
     else if (level == 1) {helligkeit = 50;}
     else if (level == 2) {helligkeit = 90;}
     else if (level == 3) {helligkeit = 150;}
     else if (level == 4) {helligkeit = 250;}
  ring.setBrightness(helligkeit);
  delay(1);}
  


if (lichtmodus == 0) {                             // modus1
colorWipe(ring.Color(helligkeit, 0, 0), wait); // Red
colorWipe(ring.Color( 0, helligkeit, 0), wait); // Green
colorWipe(ring.Color( 0, 0, helligkeit), wait); // Blue 
}

 else if (lichtmodus == 1) {                             // modus2
theaterChase(ring.Color(helligkeit, helligkeit, helligkeit), wait); // White, half brightness
theaterChase(ring.Color(helligkeit, 0, 0), wait); // Red, half brightness
theaterChase(ring.Color( 0, 0, helligkeit), wait); // Blue, half brightness 
}

 else if (lichtmodus == 2) {                             // modus3
rainbow(wait/5); // Flowing rainbow cycle along the whole ring 
}

  else if (lichtmodus == 3) {                             // modus4
theaterChaseRainbow(wait); // Rainbow-enhanced theaterChase variant 
}

if (lichtmodus == 4) {                             // modus0
colorWipe(ring.Color(helligkeit, 0, 0), wait); // Red
colorWipe(ring.Color( 0, helligkeit, 0), wait); // Green
colorWipe(ring.Color( 0, 0, helligkeit), wait); // Blue
theaterChase(ring.Color(helligkeit, helligkeit, helligkeit), wait); // White, half brightness
theaterChase(ring.Color(helligkeit, 0, 0), wait); // Red, half brightness
theaterChase(ring.Color( 0, 0, helligkeit), wait); // Blue, half brightness
theaterChaseRainbow(wait); // Rainbow-enhanced theaterChase variant
rainbow(wait/5); // Flowing rainbow cycle along the whole ring 
}
}

  

void colorWipe(uint32_t color, int wait) {
for(int i=0; i<ring.numPixels(); i++) {
ring.setPixelColor(i, color);
ring.show();
delay(wait);
}
}


void theaterChase(uint32_t color, int wait) {
for(int a=0; a<10; a++) {
for(int b=0; b<3; b++) {
ring.clear();
for(int c=b; c<ring.numPixels(); c += 3) {
ring.setPixelColor(c, color); // Set pixel 'c' to value 'color'
}
ring.show();
delay(wait);
}
}
}


void rainbow(int wait) {
for(long firstPixelHue = 0; firstPixelHue < 5*65536; firstPixelHue += 256) {
for(int i=0; i<ring.numPixels(); i++) {
int pixelHue = firstPixelHue + (i * 65536L / ring.numPixels());
ring.setPixelColor(i, ring.gamma32(ring.ColorHSV(pixelHue)));
}
ring.show();
delay(wait);
}
}


void theaterChaseRainbow(int wait) {
int firstPixelHue = 0; // First pixel starts at red (hue 0)
for(int a=0; a<30; a++) {
for(int b=0; b<3; b++) {
ring.clear();
for(int c=b; c<ring.numPixels(); c += 3) {
int hue = firstPixelHue + c * 65536L / ring.numPixels();
uint32_t color = ring.gamma32(ring.ColorHSV(hue));
ring.setPixelColor(c, color);
}
ring.show();
delay(wait);
firstPixelHue += 65536 / 90;
}
}
}


// NOTE: For "daisy-chaining" two LED Rings, simply increase the number LED_COUNT to 24.
