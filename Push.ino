
int pushbutton = 0;


void setup()
{
  pinMode (3, INPUT); //pushbutton
  pinMode(9, OUTPUT); // LED
}

void loop()
{
  pushbutton = digitalRead(3);
  if (pushbutton == HIGH) {
    digitalWrite(9, HIGH);
    delay(10000); // Wait for 10000 millisecond(s)
  } else {
    digitalWrite(9, LOW);
  }
}
