int enablePin = 13;
int rightMotor = 12;
int leftMotor = 11;
int rightButton = 9;
int leftButton = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(enablePin, OUTPUT);
  digitalWrite(enablePin, HIGH);
  
  pinMode(rightMotor, OUTPUT);
  pinMode(leftMotor, OUTPUT);
  pinMode(rightButton, INPUT);
  pinMode(8, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonPressRight = digitalRead(9);
  int buttonPressLeft = digitalRead(8);

  if (buttonPressRight == LOW) {
    digitalWrite(rightMotor, HIGH);
    digitalWrite(leftMotor, LOW);
  }

  if (buttonPressLeft == LOW) {
    digitalWrite(leftMotor, HIGH);
    digitalWrite(rightMotor, LOW);
  }

}
