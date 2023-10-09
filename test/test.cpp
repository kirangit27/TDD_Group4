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
