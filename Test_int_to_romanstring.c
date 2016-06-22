//
//  Test_roman_to_int.c
//  test
//
//  Created by Bharat Kumar Bacha on 6/21/16.
//  Copyright © 2016 Bharat Kumar Bacha. All rights reserved.
//

#include "/Users/bharatkumarbacha/Downloads/Unity-master/src/unity.h"
#include "/Users/bharatkumarbacha/Downloads/Unity-master/int_to_romanstring.h"


void test_Value_of_AverageInteger(char* temp)
{
char romannumb[10] = {};
    TEST_ASSERT_EQUAL_STRING("DXXI",int_to_romanstring(521,romannumb));
    TEST_ASSERT_EQUAL_STRING("MCDLVI",int_to_romanstring(1456,romannumb));
    TEST_ASSERT_EQUAL_STRING("CMXCIX",int_to_romanstring(999,romannumb));
}

void test_Value_of_HighestInteger(void)
{
char romannumb[10] = {};
    TEST_ASSERT_EQUAL_STRING("MMMMMMMMMM",int_to_romanstring(10000,romannumb));
    TEST_ASSERT_EQUAL_STRING("MMMMMMMMCMLVI",int_to_romanstring(8956,romannumb));
}

void test_Value_of_LowestInteger(void)
{
char romannumb[10] = {};
    TEST_ASSERT_EQUAL_STRING("0",int_to_romanstring(0,romannumb));
    TEST_ASSERT_EQUAL_STRING("III",int_to_romanstring(3,romannumb));
}


int main(void)
{
    UNITY_BEGIN();
    char* romannumb;
    RUN_TEST(test_Value_of_AverageInteger);
    RUN_TEST(test_Value_of_HighestInteger);
    RUN_TEST(test_Value_of_LowestInteger);
    return UNITY_END();
}
