/**
 * @file main.cpp
 * @author Kiran S Patil, Patrik Dominik Pordi, Hritvik Choudhari 
 * @brief mail file of a program that implements a PID controller.
 * @version 0.1
 * @date 2023-10-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include "../include/pid.hpp"


int main() {
  double kp, ki, kd, dt, ref_vel, vel = 0;
  double new_vel;

  kp = 0.1;
  ki = 0.0;
  kd = 0.1;
  dt = 0.1;

  PID pid(kp, ki, kd, dt);

  std::cout << "Enter the target velocity: ";
  std::cin >> ref_vel;

  new_vel = pid.compute(ref_vel, vel);
  std::cout << "The new velocity: " << new_vel << std::endl;

  return 0;
}
