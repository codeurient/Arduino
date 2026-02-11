void setup() {
  Serial.begin(9600);

  int arr[5] = {10, 20, 30, 40, 50};

  for (int i = 0; i < 5; i++) {
    Serial.println(arr[i]);
  }
}

void loop() {
}
