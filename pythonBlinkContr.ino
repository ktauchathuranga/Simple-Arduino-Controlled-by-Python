int value = 0;
void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.println("Connection Success!");
}

void loop() {
  while (Serial.available()) {
    value = Serial.read();
  }
  if (value == '1')
    digitalWrite(13, HIGH);
  else if (value == '0')
    digitalWrite(13, LOW);
}
