/*
    Project name : Light Sensors
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-light-sensors
*/

const int lightSensorPin = A0; // Analog pin connected to the light sensor
const int threshold = 500; // Threshold for light detection

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int sensorValue = analogRead(lightSensorPin); // Read the value from the light sensor

  // Print the sensor value to the Serial Monitor
  Serial.print("Light Sensor Value: ");
  Serial.println(sensorValue);

  // Check if light level is above or below the threshold
  if (sensorValue > threshold) {
    Serial.println("Bright Light Detected");
  } else {
    Serial.println("Dim Light Detected");
  }

  // Add a small delay to avoid spamming the Serial Monitor
  delay(500);
}

bool isBright(int value) {
  return value > threshold;
}

bool isDim(int value) {
  return value <= threshold;
}
