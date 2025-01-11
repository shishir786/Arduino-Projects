/ define the pin numbers
const int trigPin = 11;
const int echoPin = 12;
// define variables
long duration;
int distance;
float distanceinches;
float distanceThreshold=80;
void setup() {
Serial.begin(9600); // Starts the serial communication
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output pinMode(echoPin, INPUT); // Sets the echoPin as an Input pinMode(2, OUTPUT); // Sets pins 2, 3, and 4 as the Output pin pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
}
void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 microseconds digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance distance = (duration/2) * 1e-6 * 340 * 100; distanceinches = (distance / 2.54);
// Prints the distance on the Serial Monitor
Serial.print("Distance = ");
Serial.print(distance);
Serial.print(“cm;  ”);
Serial.print("Distance = ");
Serial.print(distanceinches);
Serial.println(“inches”);
// set threshold distance to activate LEDs
distanceThreshold = 80;
if (distance > distanceThreshold) {
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
}
if (distance < distanceThreshold && distance > distanceThreshold-30) {
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
}
if (distance < distanceThreshold-30 && distance > distanceThreshold-50) {
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
}
if (distance < distanceThreshold-50 && distance > distanceThreshold-70 ) {
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
}
delay(200); // Wait for 200 millisecond(s)
}

