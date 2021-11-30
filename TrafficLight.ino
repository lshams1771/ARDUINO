// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  // your led will glow/on
  digitalWrite(13, HIGH);
  // your led glow for 500 miliseconds / half seconds
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(13, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(9, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(9, LOW);
  delay(500); // Wait for 500 millisecond(s)
}
