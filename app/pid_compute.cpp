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

PID::PID(double m_Kp, double m_Ki, double m_Kd, double m_dt) {
  m_Kp = 0.0;
  m_Ki = 0.0;
  m_Kd = 0.0;
  m_dt = 0.0;
}


double PID::compute(double ref_vel, double vel) {
  
  double new_vel; 


  return new_vel;  
}