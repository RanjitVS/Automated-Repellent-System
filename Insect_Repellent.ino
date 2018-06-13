int temt6000Pin = A0;
#define buzzer 9
void setup() {
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  int value = analogRead(temt6000Pin);
  Serial.println(value);
 if (value < 700)
 {
  tone(buzzer,1000);
  delay(500);
 }
 else
 {
 noTone(buzzer);
 }
 }
