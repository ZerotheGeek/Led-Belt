#include <Adafruit_NeoPixel.h>

#define PIN 12

// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
// Adafruit made the original code I Zero the Geek changed it for my own uses and shared it on instructables, github, and youtube
Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  // Some example procedures showing how to display to the pixels:

  // Send a theater pixel chase in...
 colorWipe(strip.Color(255, 0, 0), 50); // Red           
 
  //       Color Code |  How fast the leds "run" | The Color             
        theaterChase(strip.Color(100,   0,   0), 200); // Red
        theaterChase(strip.Color(200,   0,   0), 190); // Red
        theaterChase(strip.Color(130,   0,   0), 180); // Red
        theaterChase(strip.Color(140,   0,   0), 170); // Red  
        theaterChase(strip.Color(150,   0,   0), 160); // Red
        theaterChase(strip.Color(160,   0,   0), 150); // Red
        theaterChase(strip.Color(170,   0,   0), 140); // Red
        theaterChase(strip.Color(180,   0,   0), 130); // Red
        theaterChase(strip.Color(190,   0,   0), 120); // Red
        theaterChase(strip.Color(100,   0,   0), 110); // Red
  colorWipe(strip.Color(0, 255, 0), 60); // Green 
        theaterChase(strip.Color(110,   0,   0), 100); // Red
        theaterChase(strip.Color(120,   0,   0), 90); // Red
        theaterChase(strip.Color(130,   0,   0), 80); // Red
        theaterChase(strip.Color(140,   0,   0), 70); // Red
        theaterChase(strip.Color(150,   0,   0), 60); // Red
        theaterChase(strip.Color(160,   0,   0), 50); // Red
        theaterChase(strip.Color(170,   0,   0), 40); // Red
        theaterChase(strip.Color(180,   0,   0), 30); // Red
        theaterChase(strip.Color(190,   0,   0), 20); // Red
        theaterChase(strip.Color(200,   0,   0), 10); // Red
  colorWipe(strip.Color(0, 0, 255), 70); // Blue 
        theaterChase(strip.Color(210,   0,   0), 210); // Red
        theaterChase(strip.Color(220,   0,   0), 220); // Red
        theaterChase(strip.Color(230,   0,   0), 230); // Red
        theaterChase(strip.Color(240,   0,   0), 240); // Red
        theaterChase(strip.Color(250,   0,   0), 250); // Red 
        // Let's use the other colors I got the color codes from http://www.rapidtables.com/web/color/RGB_Color.htm
        theaterChase(strip.Color(165,42,42), 200); // brown
        theaterChase(strip.Color(128,0,0), 190); // maroon
        theaterChase(strip.Color(139,0,0), 180); // dark red
        theaterChase(strip.Color(178,34,34), 170); // firebrick
        theaterChase(strip.Color(220,20,60), 160); // crimson
  colorWipe(strip.Color(128,0,128), 80); // Purple 
        theaterChase(strip.Color(60,   0,   0), 150); // Red
        theaterChase(strip.Color(255,99,71), 140); // tomato
        theaterChase(strip.Color(255,127,80), 130); // coral
        theaterChase(strip.Color(205,92,92), 120); // indian red
        theaterChase(strip.Color(240,128,128), 110); // light coral
        theaterChase(strip.Color(233,150,122), 100); // dark salmon
        theaterChase(strip.Color(250,128,114), 90); // salmon
        theaterChase(strip.Color(255,160,122), 80); // 	light salmon
        theaterChase(strip.Color(255,69,0), 70); // orange red
        theaterChase(strip.Color(255,140,0), 60); // dark orange
   colorWipe(strip.Color(128,128,0), 90); // Olive 
        theaterChase(strip.Color(255,165,0), 50); // orange
        theaterChase(strip.Color(255,215,0), 40); // gold
        theaterChase(strip.Color(184,134,11), 30); // dark golden rod
        theaterChase(strip.Color(218,165,32), 20); // golden rod
        theaterChase(strip.Color(238,232,170), 10); // pale golden rod
        theaterChase(strip.Color(189,183,107), 210); // dark khaki
        theaterChase(strip.Color(240,230,140), 220); // khaki
        theaterChase(strip.Color(128,128,0), 230); // olive
        theaterChase(strip.Color(255,255,0), 240); // yellow
        theaterChase(strip.Color(154,205,50), 250); // yellow green
   colorWipe(strip.Color(211,211,211), 100); // light grey 
        theaterChase(strip.Color(85,107,47), 260); //dark olive green
        theaterChase(strip.Color(107,142,35), 270); //olive drab
        theaterChase(strip.Color(124,252,0), 280); //lawn green 
        theaterChase(strip.Color(127,255,0), 290); //chart reuse
        theaterChase(strip.Color(173,255,47), 300); //green yellow
        theaterChase(strip.Color(0,100,0), 310); // dark green
        theaterChase(strip.Color(0,128,0), 320); // green
        theaterChase(strip.Color(34,139,34), 330); // forest green
        theaterChase(strip.Color(0,255,0), 340); // lime
        theaterChase(strip.Color(50,205,50), 350); // lime green
   colorWipe(strip.Color(192,192,192), 90); // Silver 
        theaterChase(strip.Color(144,238,144), 360); // light green
        theaterChase(strip.Color(152,251,152), 370); // pale green
        theaterChase(strip.Color(143,188,143), 380); // dark sea green
        theaterChase(strip.Color(0,250,154), 390); // medium spring green
        theaterChase(strip.Color(0,255,127), 400); // spring green
        theaterChase(strip.Color(46,139,87), 410); // sea green
        theaterChase(strip.Color(102,205,170), 420); // medium aqua marine
        theaterChase(strip.Color(60,179,113), 430); // medium sea green
        theaterChase(strip.Color(32,178,170), 440); // light sea green
        theaterChase(strip.Color(47,79,79), 450); // dark slate gray
   colorWipe(strip.Color(255,255,0), 80); // Yellow 
        theaterChase(strip.Color(0,128,128), 460); // teal
        theaterChase(strip.Color(0,139,139), 470); // dark cyan
        theaterChase(strip.Color(0,255,255), 480); // aqua
        theaterChase(strip.Color(128,0,128), 490); // Purple
        theaterChase(strip.Color(224,255,255), 500); // light cyan
        theaterChase(strip.Color(0,206,209), 10); // dark turquoise
        theaterChase(strip.Color(64,224,208), 20); // turquoise
        theaterChase(strip.Color(72,209,204), 30); // medium turquoise
        theaterChase(strip.Color(175,238,238), 40); // pale turquoise
        theaterChase(strip.Color(127,255,212), 50); // 	aqua marine
   colorWipe(strip.Color(245,245,245), 70); // white smoke 
        theaterChase(strip.Color(176,224,230), 60); // powder blue
        theaterChase(strip.Color(95,158,160), 70); // cadet blue
        theaterChase(strip.Color(70,130,180), 80); // steel blue
        theaterChase(strip.Color(100,149,237), 90); // corn flower blue
        theaterChase(strip.Color(0,191,255), 100); // deep sky blue
        theaterChase(strip.Color(30,144,255), 110); // dodger blue
        theaterChase(strip.Color(173,216,230), 120); // light blue
        theaterChase(strip.Color(135,206,235), 130); // sky blue
        theaterChase(strip.Color(135,206,250), 140); // light sky blue
        theaterChase(strip.Color(25,25,112), 150); // midnight blue
   colorWipe(strip.Color(0,255,255), 60); // Aqua 
        theaterChase(strip.Color(0,0,128), 160); // navy
        theaterChase(strip.Color(0,0,139), 170); // dark blue
        theaterChase(strip.Color(0,0,255), 180); // blue
        theaterChase(strip.Color(65,105,225), 190); // royal blue
        theaterChase(strip.Color(138,43,226), 200); // blue violet
        theaterChase(strip.Color(75,0,130), 210); // indigo
        theaterChase(strip.Color(72,61,139), 220); // dark slate blue
        theaterChase(strip.Color(106,90,205), 230); // slate blue
        theaterChase(strip.Color(123,104,238), 240); // medium slate blue
        theaterChase(strip.Color(147,112,219), 250); // medium purple
   colorWipe(strip.Color(128,128,128), 50); //  grey 
        theaterChase(strip.Color(139,0,139), 260); // dark magenta
        theaterChase(strip.Color(148,0,211), 270); // dark violet
        theaterChase(strip.Color(153,50,204), 280); // dark orchid
        theaterChase(strip.Color(186,85,211), 290); // medium orchid
        theaterChase(strip.Color(128,0,128), 300); // purple
        theaterChase(strip.Color(216,191,216), 310); // thistle
        theaterChase(strip.Color(221,160,221), 320); // plum
        theaterChase(strip.Color(238,130,238), 330); // violet
        theaterChase(strip.Color(255,0,255), 340); // magenta
        theaterChase(strip.Color(218,112,214), 350); // orchid
   colorWipe(strip.Color(220,220,220), 40); // gainsboro 
        theaterChase(strip.Color(199,21,133), 360); // medium violet red
        theaterChase(strip.Color(219,112,147), 370); // pale violet red
        theaterChase(strip.Color(255,20,147), 380); // deep pink
        theaterChase(strip.Color(255,105,180), 390); // hot pink
        theaterChase(strip.Color(255,182,193), 400); // light pink
        theaterChase(strip.Color(255,192,203), 410); // pink
        theaterChase(strip.Color(250,235,215), 420); // antique white
        theaterChase(strip.Color(245,245,220), 430); // beige
        theaterChase(strip.Color(255,228,196), 440); // bisque
        theaterChase(strip.Color(255,235,205), 450); // blanched almond
   colorWipe(strip.Color(0,128,128), 30); // Teal 
        theaterChase(strip.Color(245,222,179), 460); // wheat
        theaterChase(strip.Color(255,248,220), 470); // corn silk
        theaterChase(strip.Color(255,250,205), 480); // lemon chiffon
        theaterChase(strip.Color(250,250,210), 490); // light golden rod yellow
        theaterChase(strip.Color(255,255,224), 500); // light yellow
        theaterChase(strip.Color(139,69,19), 10); // saddle brown
        theaterChase(strip.Color(160,82,45), 20); // sienna
        theaterChase(strip.Color(210,105,30), 30); // chocolate
        theaterChase(strip.Color(205,133,63), 40); // peru
        theaterChase(strip.Color(244,164,96), 50); // sandy brown
   colorWipe(strip.Color(255,255,255), 20); // White 
        theaterChase(strip.Color(222,184,135), 60); //`burly wood
        theaterChase(strip.Color(210,180,140), 70); // tan
        theaterChase(strip.Color(188,143,143), 80); // rosy brown
        theaterChase(strip.Color(255,228,181), 90); // moccasin
        theaterChase(strip.Color(255,222,173), 100); // navajo white
        theaterChase(strip.Color(255,218,185), 110); // peach puff
        theaterChase(strip.Color(255,228,225), 120); // misty rose
        theaterChase(strip.Color(255,240,245), 130); // lavender blush
        theaterChase(strip.Color(250,240,230), 140); // linen
        theaterChase(strip.Color(253,245,230), 150); // old lace
   colorWipe(strip.Color(169,169,169), 10); // dark grey 
        theaterChase(strip.Color(255,239,213), 170); //`papaya whip
        theaterChase(strip.Color(255,245,238), 180); // sea shell
        theaterChase(strip.Color(245,255,250), 190); // mint cream
        theaterChase(strip.Color(112,128,144), 200); // slate gray
        theaterChase(strip.Color(230,230,250), 210); // lavender
        theaterChase(strip.Color(255,250,240), 220); // floral white
        theaterChase(strip.Color(240,248,255), 230); // alice blue
        theaterChase(strip.Color(248,248,255), 240); // ghost white
        theaterChase(strip.Color(240,255,240), 250); // honeydew
        theaterChase(strip.Color(255,255,240), 260); // ivory
   colorWipe(strip.Color(0,0,128), 50); // Navy                                                                                                                                                               
}



// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, c);
      strip.show();
      delay(wait);
  }
}



//Theatre-style crawling lights.
void theaterChase(uint32_t c, uint8_t wait) {
  for (int j=0; j<100; j++) {  //do 100 cycles of chasing
    for (int q=0; q < 3; q++) {
      for (int i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, c);    //turn every third pixel on
      }
      strip.show();
     
      delay(wait);
     
      for (int i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}




