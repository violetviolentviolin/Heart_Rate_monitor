#include<Adafruit_SSD1306.h> 
#include<Adafruit_GFX.h> 
#include<Wire.h> 


#define OLED_WIDTH 128 
#define OLED_HEIGHT 64
#define OLED_RESET -1


Adafruit_SSD1306 display(OLED_WIDTH,OLED_HEIGHT,&Wire,OLED_RESET);
void setup(){
    display.begin(SSD1306_SWITCHCAPVCC,0x3C);
    display.display();
    _delay_ms(1000);
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(10,0);
    display.println(F("THIS IS A Test")); 
    display.display();

}


void loop(){


}


