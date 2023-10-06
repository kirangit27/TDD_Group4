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
   * @brief Computes PID control action. Returns the new velocity of the mobile robot.
   *
   * @param ref_vel Reference Velocity (m/s)
   * @param vel Current Velocity (m/s)
   * @return double new_vel (m/s)
   */
  double compute(double ref_vel, double vel);

 private:

  double m_Kp;
  double m_Ki;
  double m_Kd;
  double m_dt;  // delta time change
};

