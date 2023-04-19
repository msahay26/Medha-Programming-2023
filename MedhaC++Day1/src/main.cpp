/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Student                                          */
/*    Created:      Wed Apr 19 2023                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// leftm                motor         1
// rightm               motor         2
// Inertial3            inertial      3
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

void drive(int distance, int speed) {
  leftm.resetRotation();
  int delta = distance - rightm.position(deg);

  while (abs(int(leftm.rotation(degrees))) < abs(distance)) {
    speed = delta;
    rightm.spin(forward, speed, pct);
    leftm.spin(forward, speed, pct);
  }
  rightm.stop();
  leftm.stop();
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  drive(500, 50);
}
