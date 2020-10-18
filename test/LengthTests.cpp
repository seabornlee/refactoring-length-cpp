#include <gtest/gtest.h>

#include "Length.h"

TEST(LengthTest, should_1_inch_equals_1_inch) {
    Length length(1, INCH);
    Length result = length.as(INCH);

    EXPECT_EQ(result.getValue(), 1.0);
    EXPECT_EQ(result.getUnit(), INCH);
}

TEST(LengthTest, should_2_feet_equals_2_feet) {
    Length length(2, FEET);
    Length result = length.as(FEET);

    EXPECT_EQ(result.getValue(), 2.0);
    EXPECT_EQ(result.getUnit(), FEET);
}

TEST(LengthTest, should_1_yard_equals_1_yard) {
    Length length(1, YARD);
    Length result = length.as(YARD);

    EXPECT_EQ(result.getValue(), 1.0);
    EXPECT_EQ(result.getUnit(), YARD);
}

TEST(LengthTest, should_1_foot_equals_12_inches) {
    Length length(1, FEET);
    Length result = length.as(INCH);

    EXPECT_EQ(result.getValue(), 12.0);
    EXPECT_EQ(result.getUnit(), INCH);
}

TEST(LengthTest, should_3_foot_equals_1_yard) {
    Length length(3, FEET);
    Length result = length.as(YARD);

    EXPECT_EQ(result.getValue(), 1.0);
    EXPECT_EQ(result.getUnit(), YARD);
}

TEST(LengthTest, should_1_yard_equals_3_feet) {
    Length length(1, YARD);
    Length result = length.as(FEET);

    EXPECT_EQ(result.getValue(), 3.0);
    EXPECT_EQ(result.getUnit(), FEET);
}

TEST(LengthTest, should_1_yard_equals_36_inches) {
    Length length(1, YARD);
    Length result = length.as(INCH);

    EXPECT_EQ(result.getValue(), 36.0);
    EXPECT_EQ(result.getUnit(), INCH);
}

TEST(LengthTest, should_2_yards_equals_72_inches) {
    Length length(2, YARD);
    Length result = length.as(INCH);

    EXPECT_EQ(result.getValue(), 72.0);
    EXPECT_EQ(result.getUnit(), INCH);
}

TEST(LengthTest, should_12_inches_equals_1_foot) {
    Length length(12, INCH);
    Length result = length.as(FEET);

    EXPECT_EQ(result.getValue(), 1.0);
    EXPECT_EQ(result.getUnit(), FEET);
}

TEST(LengthTest, should_36_inches_equals_1_yard) {
    Length length(36, INCH);
    Length result = length.as(YARD);

    EXPECT_EQ(result.getValue(), 1.0);
    EXPECT_EQ(result.getUnit(), YARD);
}

TEST(LengthTest, should_18_inches_equals_half_yard) {
    Length length(18, INCH);
    Length result = length.as(YARD);

    EXPECT_EQ(result.getValue(), 0.5);
    EXPECT_EQ(result.getUnit(), YARD);
}