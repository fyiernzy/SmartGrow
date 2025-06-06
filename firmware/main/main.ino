const int MQ2_PIN = 34;
const int LDR_PIN = 35;
const int BAUD = 115200;
const int DELAY_ONE_SEC = 1000;

void setup() {
  Serial.begin(BAUD);
  Serial.println("MQ2 and LDR Sensor Measurement Starting...");
}

void loop() {
  // put your main code here, to run repeatedly:
  int gasSensorValue = analogRead(MQ2_PIN);
  int lightSensorValue = analogRead(LDR_PIN);

  Serial.print("MQ2 Sensor Value: ");
  Serial.println(gasSensorValue);

  Serial.print("LDR Sesor Value: ");
  Serial.println(lightSensorValue);

  // Wait for 1 second
  delay(DELAY_ONE_SEC);
}
