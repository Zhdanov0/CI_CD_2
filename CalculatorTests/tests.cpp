#include "gtest/gtest.h"
#include "../Calculator/calculator.cpp"

Operations operations;

TEST(CalculatorTests, Add) {
    EXPECT_EQ(operations.add(7, 3), 10);
    EXPECT_EQ(operations.add(-1, 1), 0);
}

TEST(CalculatorTests, Subtract) {
    EXPECT_EQ(operations.subtract(12, 10), 2);
    EXPECT_EQ(operations.subtract(-1, -1), 0);
}

TEST(CalculatorTests, Multiply) {
    EXPECT_EQ(operations.multiply(5, 6), 30);
    EXPECT_EQ(operations.multiply(-8, 8), -64);
}

TEST(CalculatorTests, Divide) {
    EXPECT_EQ(operations.divide(18, 3), 6);
    EXPECT_EQ(operations.divide(5, 0), 0);
}

TEST(CalculatorTests, SquareRoot) {
    EXPECT_EQ(operations.power(4,2), 16);
    EXPECT_EQ(operations.power(10,0), 1);
}
