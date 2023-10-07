#include <gtest/gtest.h>
#include "../include/pid.hpp"

TEST(testPID, should_pass) {
  PID pid(0.1, 0.0, 0.1, 0.01);
  EXPECT_NEAR(pid.compute(10, 10), 10, 0.05);
}

TEST(testPID_1, should_pass) {
  PID pid(0.1, 0.0, 0.2, 0.1);
  EXPECT_NEAR(pid.compute(10, 12), 6, 0.05);
}
