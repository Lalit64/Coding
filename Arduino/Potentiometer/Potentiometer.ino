int potPos;

void pinModeRedefine(int pin, bool highLow){
  pinMode(pin, highLow);
}


void setup()
{
  Serial.begin(9600);

  pinModeRedefine(13, OUTPUT);
}

void loop()
{

  potPos = analogRead(A0);
  Serial.println(potPos);


  digitalWrite(13, HIGH);
  delay(potPos);

  digitalWrite(13, LOW);
  delay(potPos);
}
