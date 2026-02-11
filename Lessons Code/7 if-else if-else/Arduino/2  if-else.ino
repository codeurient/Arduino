void setup() {
  Serial.begin(9600);

  int temperature = 25;

  if (temperature > 30) {
    Serial.println("It's a hot day!");
  } else {
    Serial.println("It's not a hot day.");
  }
}

void loop() {
}
