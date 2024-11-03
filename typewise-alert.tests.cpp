#include <gtest/gtest.h>
#include "typewise-alert.h"

TEST(TypeWiseAlertTestSuite,InfersBreachAccordingToLimits) {
  assert(inferBreach(20, 0, 40),NORMAL);
  assert(inferBreach(-15, 0, 40),TOO_LOW);
  assert(inferBreach(55, 0, 40),TOO_HIGH);

}
TEST(TypeWiseAlertTestSuite,classifyTemperatureBreachAccordingToType) {
  assertclassifyTemperatureBreach(PASSIVE_COOLING, 30),NORMAL);
 /* assert(TypewiseAlert::classifyTemperatureBreach(TypewiseAlert::CoolingType::PASSIVE_COOLING, -5), TypewiseAlert::BreachType::TOO_LOW);
  assert(TypewiseAlert::classifyTemperatureBreach(TypewiseAlert::CoolingType::PASSIVE_COOLING, 38), TypewiseAlert::BreachType::TOO_HIGH);
  
  assert(TypewiseAlert::classifyTemperatureBreach(TypewiseAlert::CoolingType::HI_ACTIVE_COOLING, 42), TypewiseAlert::BreachType::NORMAL);
  assert(TypewiseAlert::classifyTemperatureBreach(TypewiseAlert::CoolingType::HI_ACTIVE_COOLING, -5), TypewiseAlert::BreachType::TOO_LOW);
  assert(TypewiseAlert::classifyTemperatureBreach(TypewiseAlert::CoolingType::HI_ACTIVE_COOLING, 50), TypewiseAlert::BreachType::TOO_HIGH);
  
  assert(TypewiseAlert::classifyTemperatureBreach(TypewiseAlert::CoolingType::MED_ACTIVE_COOLING, 38), TypewiseAlert::BreachType::NORMAL);
  assert(TypewiseAlert::classifyTemperatureBreach(TypewiseAlert::CoolingType::MED_ACTIVE_COOLING, -5), TypewiseAlert::BreachType::TOO_LOW);
  assert(TypewiseAlert::classifyTemperatureBreach(TypewiseAlert::CoolingType::MED_ACTIVE_COOLING, 42), TypewiseAlert::BreachType::TOO_HIGH);*/
}
