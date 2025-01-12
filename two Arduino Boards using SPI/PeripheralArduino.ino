/ SPI SLAVE(ARDUINO)
//SPI COMMUNICATION BETWEEN TWO ARDUINO
#include <SPI.h>
#define LEDpin 7
#define buttonpin 2
    volatile boolean received;
volatile byte Slavereceived, Slavesend;
int buttonvalue;
int x;
void setup() {
  Serial.begin(115200);
  pinMode(buttonpin, INPUT);  // Setting pin 2 as INPUT
  pinMode(LEDpin, OUTPUT);    // Setting pin 7 as OUTPUT
  pinMode(MISO, OUTPUT);      //Sets MISO as OUTPUT to send data to Master In SPCR |= _BV(SPE);           //Turn on SPI in Slave Mode
  received = false;
  SPI.attachInterrupt();
  //Interrupt ON is set for SPI communication
}
ISR(SPI_STC_vect)  //Interrupt routine function
{
  Slavereceived = SPDR;
  // Value received from Master stored in Slavereceived
  received = true;
  //Sets received as True
}
void loop() {
  if (received)  //To set LED ON/OFF based on the value received from Master { if (Slavereceived == 1)
  {
    digitalWrite(LEDpin, HIGH);  //Sets pin 7 as HIGH to turn on LED
    Serial.println("Slave LED is ON");
  } else {
    digitalWrite(LEDpin, LOW);  //Sets pin 7 as LOW to turn off LED
    Serial.println("Slave LED is OFF");
  }
  buttonvalue = digitalRead(buttonpin);  //Reads the status of the pin 2 if (buttonvalue == HIGH)   //To set the value of x to send to Master {
  x = 1;
}
else {
  x = 0;
}
Slavesend = x;
SPDR = Slavesend;  //Sends the x value to the Master via SPDR delay(1000); }
}
