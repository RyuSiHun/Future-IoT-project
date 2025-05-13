// C++ code
//
int red=13;
int green=11;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(green, HIGH);
  digitalWrite(red, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}