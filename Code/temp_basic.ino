// Basic Temperature Reading using LM35
const int sensorPin = A0;
float temperature;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(sensorPin);
  temperature = (reading * 5.0 * 100.0) / 1024.0;
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
  delay(1000);
}
