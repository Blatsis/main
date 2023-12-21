// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
 
  tone(9, 523, 3000); // play tone 60 (C5 = 523 Hz)
  delay(3000); // Wait for 3000 millisecond(s)
  noTone(9);

}