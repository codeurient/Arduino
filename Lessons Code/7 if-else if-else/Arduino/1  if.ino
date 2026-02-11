void setup() {
  Serial.begin(9600);

  int temperature = 35;

  if (temperature > 30) {
    Serial.println("It's a hot day!");
  }
}

void loop() {
}
