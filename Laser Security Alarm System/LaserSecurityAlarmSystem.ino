int laserPin = 3;
int sensorPin = A0;
int buttonPin = 12;
int buzzerPin = 11;
int laserThreshold = 10;
void setup() {
  pinMode(laserPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

boolean alarmState = false;


void loop() {
  if (!alarmState) {
    delay(1000);
    digitalWrite(laserPin, HIGH);
    delay(10);
    unsigned long startTime = millis();
    while (millis() – startTime < 1000) {
      int sensorValue = analogRead(sensorPin);
      Serial.println(sensorValue);
      if (sensorValue > laserThreshold) {
        alarmState = true;
        break;
      }
      delay(10);
    }
    digitalWrite(laserPin, LOW);
  } else {
    tone(buzzerPin, 440);
    if (!digitalRead(buttonPin)) {
      alarmState = false;
      noTone(buzzerPin);
    }
    delay(10);
  }
}