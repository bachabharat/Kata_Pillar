//
//  Test_roman_to_int.c
//  test
//
//  Created by Bharat Kumar Bacha on 6/21/16.
//  Copyright © 2016 Bharat Kumar Bacha. All rights reserved.
//

#include "/Users/bharatkumarbacha/Downloads/Unity-master/src/unity.h"
#include "/Users/bharatkumarbacha/Downloads/Unity-master/ADD_ROMAN.h"
#include "/Users/bharatkumarbacha/Downloads/Unity-master/SUB_ROMAN.h"


void test_Value_of_ADD(void)
{
    char a[10] = {};
    TEST_ASSERT_EQUAL_STRING("XXII",ADD_ROMAN("XX","II",a));
    TEST_ASSERT_EQUAL_STRING("M",ADD_ROMAN("D","D", a));
}

void test_Value_of_SUB(void)
{
    char a[10] = {};
    TEST_ASSERT_EQUAL_STRING("CDXI",SUB_ROMAN("MXIII","DCII",a));
    TEST_ASSERT_EQUAL_STRING("XCIX",SUB_ROMAN("I","C", a));
}



int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_Value_of_ADD);
    RUN_TEST(test_Value_of_SUB);
    return UNITY_END();
}
