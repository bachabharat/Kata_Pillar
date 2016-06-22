//
//  Test_roman_to_int.c
//  test
//
//  Created by Bharat Kumar Bacha on 6/21/16.
//  Copyright © 2016 Bharat Kumar Bacha. All rights reserved.
//

#include "/Users/bharatkumarbacha/Downloads/Unity-master/src/unity.h"
#include "/Users/bharatkumarbacha/Downloads/Unity-master/roman_to_int.h"


void test_Value_of_Literal(void)
{
    TEST_ASSERT_EQUAL_INT(1,roman_to_int('I'));
    TEST_ASSERT_EQUAL_INT(5,roman_to_int('V'));
    TEST_ASSERT_EQUAL_INT(10,roman_to_int('X'));
    TEST_ASSERT_EQUAL_INT(50,roman_to_int('L'));
    TEST_ASSERT_EQUAL_INT(100,roman_to_int('C'));
    TEST_ASSERT_EQUAL_INT(500,roman_to_int('D'));
    TEST_ASSERT_EQUAL_INT(1000,roman_to_int('M'));
    TEST_ASSERT_EQUAL_INT(0,roman_to_int('0'));
    
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_Value_of_Literal);
    return UNITY_END();
    
}
