#include <gtest/gtest.h>
#include <stdio.h>
#include "func.h"

TEST(arrayTest, empty)
{

}

TEST(arrayTest, testfor1element_1)
{
    int elem = 18;
    int arr[1] = {elem};
    EXPECT_EQ(max(arr, 1), 18);
}

TEST(arrayTest, testfor2elements_greatest) 
{
    int elem1 = 19;
    int elem2 = 20;
    int arr[2] = {elem1, elem2};
    EXPECT_EQ(max(arr, 2), 20);
}

TEST(arrayTest, testfor3elements_greatest) 
{
    int elem1 = 19;
    int elem2 = 20;
    int elem3 = 21;
    int arr[3] = {elem1, elem2, elem3};
    EXPECT_EQ(max(arr, 3), 21);
}
TEST(arrayTest, testfor4elements_greatest) 
{
    int elem1 = 19;
    int elem2 = 20;
    int elem3 = 21;
    int elem4 = 22;
    int arr[4] = {elem1, elem2, elem3, elem4};
    EXPECT_EQ(max(arr, 4), 22);
}

TEST(arrayTest, testfor5elementsLast_greatest) 
{
    int elem1 = 19;
    int elem2 = 20;
    int elem3 = 21;
    int elem4 = 22;
    int elem5 = 22;
    int arr[5] = {elem1, elem2, elem3, elem4, elem5};
    EXPECT_EQ(max(arr, 5), 22);
}