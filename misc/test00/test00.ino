//
// tesdt00.ino
//

// Last update: Thu Aug 31 08:59:07 ADT 2023

int val1 = 0, val2 = 0, val3 = 0;

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(57600);
  Serial.print("#debug:\tHello, UCI! A message from GBKA.\n");
}

void loop() {
  if (Serial.available() > 0) {
    String str = Serial.readStringUntil('\n');
    int n, tmpV1 = 0, tmpV2 = 0, tmpV3 = 0;
    Serial.print("#debug str\t["); Serial.print(str); Serial.println("]");

    if ((n = sscanf(str.c_str(), "%d %d %d", &tmpV1, &tmpV2, &tmpV3)) >= 1) {
      val1 = tmpV1;
      if (n >= 2) {
        val2 = tmpV2;
      }
      if (n >= 3) {
        val3 = tmpV3;
      } 

      // Serial.print("#debug:\t");
      // Serial.print(millis()); Serial.print("\t");
      // Serial.print(val1); Serial.print("\t");
      // Serial.print(val2); Serial.print("\t");
      // Serial.print(val3); Serial.println();

      if (val1 > 0) {
        digitalWrite(13, HIGH);
      } else {
        digitalWrite(13, LOW);
      }
    }
  }
}

