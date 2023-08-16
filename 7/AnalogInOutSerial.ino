// These constants won't change. They're used to give names to the pins used:
const int analogInPin1 = A0;  // Analog input pin that the potentiometer is attached to
const int analogInPin2 = A1;  // Analog input pin that the potentiometer is attached to
const int analogInPin3 = A2;  // Analog input pin that the potentiometer is attached to
const int analogInPin4 = A3;  // Analog input pin that the potentiometer is attached to

int sensorValue1 = 0;  // value read from the pot
int sensorValue2 = 0;  // value read from the pot
int sensorValue3 = 0;  // value read from the pot
int sensorValue4 = 0;  // value read from the pot

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(115200);
}

void loop() {
  // read the analog in value:
  sensorValue1 = analogRead(analogInPin1);
  // map it to the range of the analog out:
  sensorValue1 = map(sensorValue1, 0, 4095, 0, 255);

  // read the analog in value:
  sensorValue2 = analogRead(analogInPin2);
  // map it to the range of the analog out:
  sensorValue2 = map(sensorValue2, 0, 4095, 0, 255);

    // read the analog in value:
  sensorValue3 = analogRead(analogInPin3);
  // map it to the range of the analog out:
  sensorValue3 = map(sensorValue3, 0, 4095, 0, 255);

    // read the analog in value:
  sensorValue4 = analogRead(analogInPin4);
  // map it to the range of the analog out:
  sensorValue4 = map(sensorValue4, 0, 4095, 0, 255);  

  // print the results to the Serial Monitor:

  Serial.print(sensorValue1);
  Serial.print(',');

  Serial.print(sensorValue2);
  Serial.print(',');

  Serial.print(sensorValue3);
  Serial.print(',');

  Serial.println(sensorValue4);
  

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(250);
}
