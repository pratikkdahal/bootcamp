// C++ code
//
int ledPin = 13;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  digitalWrite(ledPin, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(ledPin, LOW);
  delay(500); // Wait for 500 millisecond(s)
}