// Temperature Monitor with LED Alerts
const int sensorPin = A0;
const int ledRed = 9;
const int ledGreen = 10;
float temperature;

void setup() {
  Serial.begin(9600);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}

void loop() {
  int reading = analogRead(sensorPin);
  temperature = (reading * 5.0 * 100.0) / 1024.0;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  if (temperature > 30) {
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledGreen, LOW);
  } else {
    digitalWrite(ledRed, LOW);
    digitalWrite(ledGreen, HIGH);
  }
  delay(1000);
}
