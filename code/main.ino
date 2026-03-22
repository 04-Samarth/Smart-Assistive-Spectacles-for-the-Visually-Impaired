void loop() {
  sensorState = digitalRead(sensorPin);

  if (sensorState == HIGH) {
    Serial.println("Obstacle Detected!");

    // Beep pattern
    digitalWrite(buzzer, HIGH);
    digitalWrite(motor, HIGH);
    delay(200);

    digitalWrite(buzzer, LOW);
    digitalWrite(motor, LOW);
    delay(200);
  } 
  else {
    Serial.println("No Obstacle");

    digitalWrite(buzzer, LOW);
    digitalWrite(motor, LOW);
  }
}
