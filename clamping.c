// Clamping a sensor reading within a specific range
const int sensorPin = A0;
const int minReading = 0;
const int maxReading = 1023;

void setup() {
  Serial.begin(9600); 
  // Your setup code
}

void loop() {
  // Read sensor value
  int sensorValue = analogRead(sensorPin);

  // Clamp the sensor value within the specified range
  int clampedValue = (sensorValue < minReading ? minReading : (sensorValue > maxReading ? maxReading : sensorValue));

  // Print the original and clamped sensor values
  Serial.print("Original Value: ");
  Serial.print(sensorValue);
  Serial.print(" | Clamped Value: ");
  Serial.println(clampedValue);

  // Use the clamped value for further processing or actions
  // ...

  delay(1000); // Delay for better readability in serial monitor
}
