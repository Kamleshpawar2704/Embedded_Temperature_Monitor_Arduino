// Temperature Plot using Serial Plotter
const int sensorPin = A0;
float temperature;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(sensorPin);
  temperature = (reading * 5.0 * 100.0) / 1024.0;
  Serial.println(temperature);
  delay(500);
}
