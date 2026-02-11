void hello() {
  Serial.println("Salam");
}

void start() {
  hello();  // start funksiyası hello-nu çağırır
}

void setup() {
  Serial.begin(9600);
  start();  // main funksiyasının işini əvəz edir
}

void loop() {
  // boş qalır
}
