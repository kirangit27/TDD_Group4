#include <gtest/gtest.h>
#include "../include/pid.hpp"

TEST(testPID, should_pass) {
  PID pid(0.1, 0.0, 0.1, 0.1);
  EXPECT_NEAR(pid.compute(10.0, 10.0), 10.0, 0.05);
}

TEST(testPID_1, should_pass) {
  PID pid(0.1, 0.0, 0.1, 0.1);
  EXPECT_NEAR(pid.compute(10.0, 12.0), 9.8, 0.05);
}

// Additional Test cases

TEST(testPID_2, should_pass) {
  PID pid(1.0, 0.0, 0.5, 0.1);
  EXPECT_NEAR(pid.compute(15.0, 10.0), 40.0, 2.00);
}

/*
Calculation:
error = ref_vel - vel
error = 15.0 - 10.0 = 5.0
error_i = 0 (for simplicity, as we don't have preceeding values)
new_vel = vel + Kp*error + Ki*(error*dt) + Kd*(error - error_i)/dt
new_vel = 10 + 5 + 0 + 0.5*5*10 
new_vel = 40
*/


TEST(testPID_3, should_pass) {
  PID pid(0.5, 2.0, 0.0, 0.1);
  EXPECT_NEAR(pid.compute(5.0, 6.0), 9.8, 1.00);
}

/*
Calculation:
error = ref_vel - vel
error = 5.0 - 6.0 = -1.0
error_i = 0 (for simplicity, as we don't have preceeding values)
new_vel = vel + Kp*error + Ki*(error*dt) + Kd*(error - error_i)/dt
new_vel = 6 - 0.5 + 2.0*(-1*0.1) + 0
new_vel = 6 - 0.5 - 0.2
new_vel = 5.3
*/