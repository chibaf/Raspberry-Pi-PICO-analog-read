// 2021/07/25 imo lab.
// https://garchiving.com/

void setup() {
  Serial.begin(9600);
}

uint16_t raw;
float v;

void loop() {
  raw = analogRead(26);
  v   = raw * 3.3 / (1 << 12);

  Serial.println(v);
  delay(10);
}
