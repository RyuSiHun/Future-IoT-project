// C++ code
//

int led=13;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int readValue=analogRead(A0);
  Serial.println(readValue);

  if(readValue < 400){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
}