int enablePin = 8;
int rightMotor = 9;
int leftMotor = 10;
int rightButton = 11;
int leftButton = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(enablePin, OUTPUT);
  digitalWrite(enablePin, HIGH);
  
  pinMode(rightMotor, OUTPUT);
  pinMode(leftMotor, OUTPUT);
  pinMode(rightButton, INPUT);
  pinMode(leftButton, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonPressRight = digitalRead(rightButton);
  int buttonPressLeft = digitalRead(leftButton);

  if (buttonPressRight == HIGH) {
    digitalWrite(rightMotor, HIGH);
    digitalWrite(leftMotor, LOW);
  }

  if (buttonPressLeft == HIGH) {
    digitalWrite(leftMotor, HIGH);
    digitalWrite(rightMotor, LOW);
  }

}
