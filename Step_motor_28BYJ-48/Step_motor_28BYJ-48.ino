#include <Stepper.h>

const int stepsPerRevolution = 2048; // Nombre de pas pour une rotation complète (28BYJ-48)
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  myStepper.setSpeed(10); // Vitesse en tours/minute (RPM)
}

void loop() {
  myStepper.step(1); // Fait un pas dans un seul sens
  // Tu peux aussi faire : myStepper.step(stepsPerRevolution / 100); pour plus de vitesse
}
