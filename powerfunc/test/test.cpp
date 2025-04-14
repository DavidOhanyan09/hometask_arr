#include <stdio.h>
#include <gtest/gtest.h>
#include "func.h"

double power(int x, int n);

TEST(powerTest, empty)
{

}

TEST(powerTest, testfor2power0_1)
{
    double exp = 1;
    ASSERT_EQ(power(2,0), exp);
}

TEST(powerTest, testfor2power1_2)
{
    double exp = 2;
    ASSERT_EQ(power(2,1), exp);
}
TEST(powerTest, testfor2power2_4)
{
    double exp = 4;
    ASSERT_EQ(power(2,2), exp);
}

TEST(powerTest, testfor2power3_8)
{
    double exp = 8;
    ASSERT_EQ(power(2,3), exp);
}

TEST(powerTest, testfor2power100_32768)
{
    double exp = 32768;
    ASSERT_EQ(power(2,15), exp);
}
