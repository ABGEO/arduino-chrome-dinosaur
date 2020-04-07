const int sensorPin = A0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int sensorData = analogRead(sensorPin);
  Serial.println(sensorData);
}
