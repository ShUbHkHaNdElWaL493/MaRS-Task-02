/*

    Shubh Khandelwal
    CS22B1090

    Interrupt-driven Motor

*/

// C++ code
int button1 = 3;
int button2 = 2;
int motor1 = 13;
int motor2 = 12;
//

void setup()
{
  Serial.begin(9600);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(button1), clockwise, RISING);
  attachInterrupt(digitalPinToInterrupt(button2), anticlockwise, RISING);
}

void loop()
{}

void clockwise()
{
  digitalWrite(motor2, LOW);
  digitalWrite(motor1, HIGH);
  Serial.println("The motor is moving in the clockwise direction.");
}

void anticlockwise()
{
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, HIGH);
  Serial.println("The motor is moving in the anti-clockwise direction.");
}