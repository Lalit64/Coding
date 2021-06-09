
int firstKeyPin = 2;
int secondKeyPin = 3;
int thirdKeyPin = 4;
int fourthKeyPin = 5;

int RedPin = 9;
int GreenPin = 10;
int BluePin = 11;


void setup() {
  //set the button pins as inputs
  pinMode(firstKeyPin, INPUT_PULLUP);
  pinMode(secondKeyPin, INPUT_PULLUP);
  pinMode(thirdKeyPin, INPUT_PULLUP);
  pinMode(fourthKeyPin, INPUT_PULLUP);

  //set the buzzer pin as an output
  pinMode(RedPin, OUTPUT);
  pinMode(BluePin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  if (digitalRead(firstKeyPin) == LOW) {
    blue();
  } else if (digitalRead(secondKeyPin) == LOW) {
    green();
  } else if (digitalRead(thirdKeyPin) == LOW) {
    orange();
  } else if (digitalRead(fourthKeyPin) == LOW) {
    red();
  } else {
    turnOff();
  }
}
