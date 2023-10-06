#include <iostream>
#include "../include/pid.hpp"


/**
 * @brief Function to take input from user and compute the final velocity.
 *
 * @return int 0
 */
int main() {
  double kp, ki, kd, dt, ref_vel, vel = 0;
  double new_vel;
  // PID pid();
  PID PID(kp,ki,kd,dt);


  // Assuming the robot starts from 0 m/s velocity
  std::cout << "\nEnter the target velocity: ";
  std::cin >> ref_vel;
  new_vel = PID.compute(ref_vel, vel);
  std::cout << "The final controlled velocity: " <<new_vel<<std::endl;
}