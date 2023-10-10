/**
 * @file pid.hpp
 * @author Kiran S Patil, Patrik Dominik Pordi
 * @brief header file containing PID class
 * @version 0.1
 * @date 2023-10-07
 *
 * @copyright Copyright (c) 2023
 *
 */
#pragma once

/**
 * @brief PID controller class.
 *
 */
class PID {

 public:
  /**
   * @brief Constructor to assign default values to the PID gains and dt
   *
   */
  PID(double m_Kp,double m_Ki, double m_Kd, double m_dt);

  /**
   * @brief Computes PID control action. Returns the new velocity.
   *
   * @param ref_vel Reference velocity
   * @param vel Current velocity
   * @return double new_vel
   */
  double compute(double ref_vel, double vel);

 private:

  double m_Kp;
  double m_Ki;
  double m_Kd;
  double m_dt;  // delta time change
};

