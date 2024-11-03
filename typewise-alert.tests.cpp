#include <gtest/gtest.h>
#include "typewise-alert.h"

TEST(TypeWiseAlertTestSuite,InfersBreachAccordingToLimits) {
  EXPECT_EQ(inferBreach(20, 0, 40), NORMAL);
 // EXPECT_EQ(TypewiseAlert::inferBreach(-15, 0, 40), TypewiseAlert::BreachType::TOO_LOW);
 // EXPECT_EQ(TypewiseAlert::inferBreach(55, 0, 40), TypewiseAlert::BreachType::TOO_HIGH);

}
