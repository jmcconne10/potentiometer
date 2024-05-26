/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-potentiometer
 */

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin A0:
  int analogValue = analogRead(A3);

  // print out the value you read:
  Serial.print("Analog: ");
  Serial.println(analogValue);
  delay(100);
}
