void setup() {
  Serial.begin(115200);
  pinMode(A0, INPUT_PULLUP);
}

void loop() {
  int fsr_value = analogRead(A0); // 讀取FSR
  int led_value = map(fsr_value, 0, 1023, 0, 255); // 從0~1023映射到0~255
  Serial.println(fsr_value);
  Serial.println(led_value);
  Serial.println("-------------");
  delay(100);

}
