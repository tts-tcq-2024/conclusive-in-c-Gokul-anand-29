#include <gtest/gtest.h>
#include "typewise-alert.h"

TEST(TypeWiseAlertTestSuite,InfersBreachAccordingToLimits) {
  assert(inferBreach(20, 0, 40),NORMAL);
  assert(inferBreach(-15, 0, 40),TOO_LOW);
  assert(inferBreach(55, 0, 40),TOO_HIGH);

}
TEST(TypeWiseAlertTestSuite,classifyTemperatureBreachAccordingToType) {
  assertclassifyTemperatureBreach(PASSIVE_COOLING, 30),NORMAL);
  assert(classifyTemperatureBreach(PASSIVE_COOLING, -5), TOO_LOW);
  assert(classifyTemperatureBreach(PASSIVE_COOLING, 38),TOO_HIGH);
  
  assert(classifyTemperatureBreach(HI_ACTIVE_COOLING, 42),NORMAL);
  assert(classifyTemperatureBreach(HI_ACTIVE_COOLING, -5),TOO_LOW);
  assert(classifyTemperatureBreach(HI_ACTIVE_COOLING, 50), TOO_HIGH);
  
  assert(classifyTemperatureBreach(MED_ACTIVE_COOLING, 38),NORMAL);
  assert(classifyTemperatureBreach(MED_ACTIVE_COOLING, -5), TOO_LOW);
  assert(classifyTemperatureBreach(MED_ACTIVE_COOLING, 42), TOO_HIGH);
}
