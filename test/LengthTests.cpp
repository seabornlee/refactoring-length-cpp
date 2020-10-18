#include <gtest/gtest.h>

#include "Length.h"

TEST(LengthTest, should_1_inch_equals_1_inch) {
    Length length(1, Inch);
    Length result = length.as(Inch);

    EXPECT_EQ(result.getValue(), 1.0);
    EXPECT_EQ(result.getUnit(), Inch);
}

TEST(LengthTest, should_2_feet_equals_2_feet) {
    Length length(2, Feet);
    Length result = length.as(Feet);

    EXPECT_EQ(result.getValue(), 2.0);
    EXPECT_EQ(result.getUnit(), Feet);
}

TEST(LengthTest, should_1_yard_equals_1_yard) {
    Length length(1, Yard);
    Length result = length.as(Yard);

    EXPECT_EQ(result.getValue(), 1.0);
    EXPECT_EQ(result.getUnit(), Yard);
}

TEST(LengthTest, should_1_foot_equals_12_inches) {
    Length length(1, Feet);
    Length result = length.as(Inch);

    EXPECT_EQ(result.getValue(), 12.0);
    EXPECT_EQ(result.getUnit(), Inch);
}

TEST(LengthTest, should_3_foot_equals_1_yard) {
    Length length(3, Feet);
    Length result = length.as(Yard);

    EXPECT_EQ(result.getValue(), 1.0);
    EXPECT_EQ(result.getUnit(), Yard);
}

TEST(LengthTest, should_1_yard_equals_3_feet) {
    Length length(1, Yard);
    Length result = length.as(Feet);

    EXPECT_EQ(result.getValue(), 3.0);
    EXPECT_EQ(result.getUnit(), Feet);
}

TEST(LengthTest, should_1_yard_equals_36_inches) {
    Length length(1, Yard);
    Length result = length.as(Inch);

    EXPECT_EQ(result.getValue(), 36.0);
    EXPECT_EQ(result.getUnit(), Inch);
}

TEST(LengthTest, should_2_yards_equals_72_inches) {
    Length length(2, Yard);
    Length result = length.as(Inch);

    EXPECT_EQ(result.getValue(), 72.0);
    EXPECT_EQ(result.getUnit(), Inch);
}

TEST(LengthTest, should_12_inches_equals_1_foot) {
    Length length(12, Inch);
    Length result = length.as(Feet);

    EXPECT_EQ(result.getValue(), 1.0);
    EXPECT_EQ(result.getUnit(), Feet);
}

TEST(LengthTest, should_36_inches_equals_1_yard) {
    Length length(36, Inch);
    Length result = length.as(Yard);

    EXPECT_EQ(result.getValue(), 1.0);
    EXPECT_EQ(result.getUnit(), Yard);
}

TEST(LengthTest, should_18_inches_equals_half_yard) {
    Length length(18, Inch);
    Length result = length.as(Yard);

    EXPECT_EQ(result.getValue(), 0.5);
    EXPECT_EQ(result.getUnit(), Yard);
}