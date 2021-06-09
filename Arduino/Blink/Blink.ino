
void setup() {
  pinMode(12, OUTPUT);
}

void loop() {
  // String with 'SOS' in binary because I have no idea how to add the spaces inbetween morse code letters
  char text[41] = "010100110100111101010011";

  for (char c : text) {
    if (c == '1') {
      digitalWrite(12, HIGH);
      delay(100);
    } else {
      digitalWrite(12, LOW);
      delay(100);
    }
  }
}
