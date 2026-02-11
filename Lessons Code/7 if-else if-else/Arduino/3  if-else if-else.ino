void setup() {
  Serial.begin(9600);

  int temperature = 18;

  if (temperature > 30) {
    Serial.println("It's a hot day!");
  }
  else if (temperature >= 20 && temperature <= 30) {
    Serial.println("The weather is nice.");
  }
  else {
    Serial.println("It's a bit cold today.");
  }
}

void loop() {
}
