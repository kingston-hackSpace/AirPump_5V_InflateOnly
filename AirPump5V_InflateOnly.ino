int air = 3;
int LED = 13;

void setup() {
  Serial.begin(9600);
  pinMode(air, OUTPUT);
  pinMode(LED, OUTPUT);

}

void loop() {
  //turn on
  analogWrite(air, 255);
  digitalWrite(LED, HIGH);
  delay(10000);

  //turn off
  analogWrite(air, 0);
  digitalWrite(LED, LOW);
  delay(3000);

}
