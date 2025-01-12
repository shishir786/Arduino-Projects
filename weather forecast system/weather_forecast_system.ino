#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_BMP085.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT);
Adafruit_BMP085 bmp;
#define SEALEVELPRESSURE_HPA (101500)
float simpleweatherdifference, currentpressure, predictedweather, currentaltitude;
void setup() {
  // put your setup code here, to run once:
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  if (!bmp.begin()) {
    Serial.println("Could not find a valid BMP085 sensor, check wiring!");
    while (1) {}
  }
}


void loop() {
  // put your main code here, to run repeatedly:
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 5);
  display.print("BMP180");
  display.setCursor(0, 19);
  display.print("T=");
  display.print(bmp.readTemperature(), 1);
  display.println("*C");
  /*prints BME180 pressure in Hectopascal Pressure Unit*/
  display.setCursor(0, 30);
  display.print("P=");
  display.print(bmp.readPressure() / 100.0F, 1);
  display.println("hPa");
  /*prints BME180 altitude in meters*/
  display.setCursor(0, 40);
  display.print("A=");
  display.print(bmp.readAltitude(SEALEVELPRESSURE_HPA), 1);
  display.println("m");
  delay(6000);
  display.display();
  currentpressure = bmp.readPressure() / 100.0;
  predictedweather = (101.3 * exp(((float)(currentaltitude)) / (-7900)));
  simpleweatherdifference = currentpressure - predictedweather;
  //display.clearDisplay();
  display.setCursor(0, 50);
  if (simpleweatherdifference > 0.25)
    display.print("SUNNY");
  if (simpleweatherdifference <= 0.25)
    display.print("SUNNY/CLOUDY");
  if (simpleweatherdifference < -0.25)
    display.print("RAINY");
  display.display();
  delay(2000);
}
