//
// test01.ino
//

// Last update: Thu Oct  5 16:50:55 JST 2023

#undef LED_BUILTIN
#define LED_BUILTIN 4

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(57600);
  Serial.print("#debug:\tHello, UCI! A message from GBKA.\n");
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.print(millis()); Serial.print("\t"); Serial.println(HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.print(millis()); Serial.print("\t"); Serial.println(LOW);
  delay(1000);
}
 
