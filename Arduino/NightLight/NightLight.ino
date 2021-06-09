int photoresistor = A1;
int potentiometer = A0;
int threshold = 900;


int RedPin = 9;
int GreenPin = 10;
int BluePin = 11;

void setup() {
  Serial.begin(9600);

  pinMode(RedPin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  pinMode(BluePin, OUTPUT);
}


void loop() {

  photoresistor = analogRead(A1);
  potentiometer = analogRead(A0);

  Serial.print("Photoresistor value:");
  Serial.print(photoresistor);
  Serial.print("  Potentiometer value:");
  Serial.println(potentiometer);

  ifColorsTrue();
}                                                                                                                                                     