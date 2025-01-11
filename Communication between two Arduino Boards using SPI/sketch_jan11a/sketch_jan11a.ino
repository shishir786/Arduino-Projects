//SPI MASTER (ARDUINO)
//SPI COMMUNICATION BETWEEN TWO ARDUINO CIRCUIT DIGEST
#include<SPI.h>            //Library for SPI 
#define LED 7
#define ipbutton 2
int buttonvalue;
int x;
void setup (void){
Serial.begin(115200); //Starts Serial Communication at Baud Rate 115200 pinMode(ipbutton,INPUT);       //Sets pin 2 as input 
pinMode(LED,OUTPUT);           //Sets pin 7 as Output
SPI.begin();                  //Begins the SPI communication
SPI.setClockDivider(SPI_CLOCK_DIV8); //Sets clock for SPI communication at // 8 (16/8 = 2 MHz)
digitalWrite(SS,HIGH); //Setting SS to HIGH do disconnect master from slave } void loop(void){
byte Mastersend, Mastereceive;
buttonvalue = digitalRead(ipbutton);   //Reads the status of the pin 2 if(buttonvalue == HIGH) //Setting x for the slave based on input at pin 2 {
x = 1;
}
else
{
x = 0;
}
digitalWrite(SS, LOW); //Starts communication with Slave from the Master Mastersend = x;
Mastereceive = SPI.transfer(Mastersend); //Sends the Mastersend value to //the slave and also receives value from the slave
if(Mastereceive == 1) //To set the LED based on value received from slaveu { digitalWrite(LED,HIGH); //Sets pin 7 HIGHSerial.println("Master LED is ON");
}
else
{
digitalWrite(LED,LOW);  //Sets pin 7 LOW
Serial.println("Master LED is OFF");
}
delay(1000);
}