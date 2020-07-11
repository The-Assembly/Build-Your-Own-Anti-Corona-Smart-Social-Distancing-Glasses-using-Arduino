#include <Adafruit_SSD1306.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>



#define pir 5

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32

#define OLED_RESET  4
Adafruit_SSD1306 display(SCREEN_WIDTH,SCREEN_HEIGHT,&Wire, OLED_RESET);


void setup(){
  display.begin(SSD1306_SWITCHCAPVCC,0x3C);
  display.clearDisplay();
  pinMode(pir,INPUT);
    display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("   The     Assembly"); 
  display.display();
  delay(2000);
  display.clearDisplay();
  display.display();
}

void loop(){
  int check = digitalRead(pir);
  if(check >= 1){
    display.setCursor(0,0);
    display.println("Warning!!!Too Close!");
    display.display();
  } else if (check == 0) {
    display.clearDisplay();
    display.display();
  }
}
