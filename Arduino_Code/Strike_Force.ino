const int piezoPins[] = {A0, A1, A2, A3, A4};

unsigned long previousTime = 0;
const unsigned long interval = 100;

void setup() {
  Serial.begin(9600);
}

void loop() {

  unsigned long currentTime = millis();

  if (currentTime - previousTime >= interval) {

    previousTime = currentTime;

    long sum = 0;

    for (int i = 0; i < 5; i++) {
      sum += analogRead(piezoPins[i]);
    }

    float mean = sum / 5.0;

    Serial.println(mean);
  }
}
