#include <stdio.h>
#include <gtest/gtest.h>
#include "subf.h"

TEST(subTest, empty)
{
    
}

TEST(subTest, firstarr1elemsecond0elem_true)
{
    int elem1 = 1;
    int arr1[1] = {elem1};
    int arr2[0];
    ASSERT_EQ(subarray(arr1, 1, arr2, 0), true);
}

TEST(subTest, firstarr1elemsecond1elem_false)
{
    int elem1 = 1;
    int arr1[1] = {elem1};
    int elem2 = 2;
    int arr2[1] = {elem2};
    ASSERT_EQ(subarray(arr1, 1, arr2, 1), false);
}

TEST(subTest, firstarr2elemsecond2elem_false)
{
    int elem1 = 1;
    int elem2 = 2;
    int arr1[2] = {elem1, elem2};
    int elem3 = 3;
    int arr2[2] = {elem1, elem3};
    ASSERT_EQ(subarray(arr1, 2, arr2, 2), false);
}

TEST(subTest, firstarrrandomelemsecond2elem_false)
{
    int elem1 = 1;
    int elem2 = 2;
    int elem5 = 7;
    int arr1[3] = {elem1, elem2, elem5};
    int elem3 = 3;
    int arr2[2] = {elem3, elem1};
    ASSERT_EQ(subarray(arr1, 3, arr2, 2), false);
}