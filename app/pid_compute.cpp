/**
 * @file pid_compute.cpp
 * @author Kiran S Patil, Patrik Dominik Pordi
 * @brief contains function definitions used to implement PID controller.
 * @version 0.1
 * @date 2023-10-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "../include/pid.hpp"
#include <cmath>

PID::PID(double Kp, double Ki, double Kd, double dt) {
  m_Kp = Kp;
  m_Ki = Ki;
  m_Kd = Kd;
  m_dt = dt;
}


double PID::compute(double ref_vel, double vel) {
  
  double new_vel; 

  // double error_i = 0;
  // double error_sum = 0;

  // double error = ref_vel - vel;

  // double propTerm = m_Kp * error;

  // error_sum +=  m_Ki*(error * m_dt);

  // double dT = m_Kd*(error - error_i) / m_dt;

  // new_vel = vel + propTerm + error_sum + dT;

  return new_vel;  
}