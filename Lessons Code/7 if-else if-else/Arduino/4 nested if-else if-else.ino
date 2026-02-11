void setup() {
  Serial.begin(9600);

  int temperature = 28;

  if (temperature > 30) {
    Serial.println("It's a hot day!");
  }
  else if (temperature >= 20 && temperature <= 30) {
    
    // İç-içə if
    if (temperature >= 25) {
      Serial.println("The weather is warm.");
    } else {
      Serial.println("The weather is mild.");
    }

  }
  else {
    Serial.println("It's a bit cold today.");
  }
}

void loop() {
}
