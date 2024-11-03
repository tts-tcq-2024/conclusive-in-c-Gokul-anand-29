#include <gtest/gtest.h>
#include "typewise-alert.h"
#include <assert.h>

TEST(TypeWiseAlertTestSuite, InfersBreachWhenValueIsBelowLowerLimit) {
    assert(inferBreach(-5.0, 0, 35), TOO_LOW);
}

TEST(TypeWiseAlertTestSuite, InfersBreachWhenValueIsAboveUpperLimit) {
    assert(inferBreach(50.0, 0, 35), TOO_HIGH);
}

TEST(TypeWiseAlertTestSuite, InfersNormalWhenValueIsWithinLimits) {
    assert(inferBreach(20.0, 0, 35), NORMAL);
}

TEST(TypeWiseAlertTestSuite, InfersLowerBoundaryAsNormal) {
    assert(inferBreach(0.0, 0, 35), NORMAL);
}

TEST(TypeWiseAlertTestSuite, InfersUpperBoundaryAsNormal) {
    assert(inferBreach(35.0, 0, 35), NORMAL);
}

TEST(TypeWiseAlertTestSuite, ClassifiesBreachForPassiveCoolingLowTemperature) {
    assert(classifyTemperatureBreach(PASSIVE_COOLING, -1.0), TOO_LOW);
}

TEST(TypeWiseAlertTestSuite, ClassifiesBreachForPassiveCoolingHighTemperature) {
    assert(classifyTemperatureBreach(PASSIVE_COOLING, 36.0), TOO_HIGH);
}

TEST(TypeWiseAlertTestSuite, ClassifiesBreachForPassiveCoolingNormalTemperature) {
    assert(classifyTemperatureBreach(PASSIVE_COOLING, 20.0), NORMAL);
}

TEST(TypeWiseAlertTestSuite, ClassifiesBreachForHiActiveCoolingLowTemperature) {
    assert(classifyTemperatureBreach(HI_ACTIVE_COOLING, -1.0), TOO_LOW);
}

TEST(TypeWiseAlertTestSuite, ClassifiesBreachForHiActiveCoolingHighTemperature) {
    assert(classifyTemperatureBreach(HI_ACTIVE_COOLING, 46.0), TOO_HIGH);
}

TEST(TypeWiseAlertTestSuite, ClassifiesBreachForHiActiveCoolingNormalTemperature) {
    assert(classifyTemperatureBreach(HI_ACTIVE_COOLING, 40.0), NORMAL);
}

TEST(TypeWiseAlertTestSuite, ClassifiesBreachForMedActiveCoolingLowTemperature) {
    assert(classifyTemperatureBreach(MED_ACTIVE_COOLING, -1.0), TOO_LOW);
}

TEST(TypeWiseAlertTestSuite, ClassifiesBreachForMedActiveCoolingHighTemperature) {
    assert(classifyTemperatureBreach(MED_ACTIVE_COOLING, 41.0), TOO_HIGH);
}

TEST(TypeWiseAlertTestSuite, ClassifiesBreachForMedActiveCoolingNormalTemperature) {
    assert(classifyTemperatureBreach(MED_ACTIVE_COOLING, 39.0), NORMAL);
}
