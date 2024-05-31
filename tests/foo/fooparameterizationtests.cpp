#include "foo/FooParameterization.hpp"
#include <gtest/gtest.h>

TEST(FooParameterizationTests, CalculateVolume) {
    double radius = 3.0;
    double expectedVolume = (4.0 / 3.0)*M_PI*std::pow(radius, 3);
    ASSERT_NEAR(foo::FooParameterization::calculateVolume(radius), expectedVolume, 1e-9);
}