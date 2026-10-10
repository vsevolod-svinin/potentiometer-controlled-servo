
#include <Servo.h>

Servo servo;

const int POTENTIOMETER_PIN = A0;
const int SERVO_PIN = 9;

int potentiometerValue = 0;
int servoAngle = 0;

void setup() {
  servo.attach(SERVO_PIN);
}

void loop() {
  // Read the potentiometer's analog value (0-1023).
  potentiometerValue = analogRead(POTENTIOMETER_PIN);

  // Convert the ADC reading into an angle (0-180 degrees).
  servoAngle = map(potentiometerValue, 0, 1023, 0, 180);

  // Command the servo to move to the calculated angle.
  servo.write(servoAngle);

  delay(15);
}
