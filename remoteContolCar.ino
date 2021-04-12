//Name:Md.mededy Hasan Siam
//Project: Remote Control Car

char t;
void setup() {
  pinMode(13, OUTPUT);  // left motors forward
  pinMode(12, OUTPUT);  // left motors reverse
  pinMode(11, OUTPUT);  // right motors forward
  pinMode(10, OUTPUT);  // right motors reverse
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    t = Serial.read();
    Serial.println(t);
  }
  if (t == '1')
  {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);       // move forward
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);

  }
  else if (t == '2')
  {
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);     // move reverse
    digitalWrite(10, HIGH);
  }
  else if (t == '3')
  {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);     // turn right (for this reason all right side motors doesn't rotate)
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
  }
  else if (t == '4')
  {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);     // turn left (for this reason all left side motors doesn't rotate)
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }

  else if (t == '5')
  {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);     // stop
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }
  delay(100);
}
