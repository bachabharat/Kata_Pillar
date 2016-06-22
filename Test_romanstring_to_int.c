//
//  Test_roman_to_int.c
//  test
//
//  Created by Bharat Kumar Bacha on 6/21/16.
//  Copyright © 2016 Bharat Kumar Bacha. All rights reserved.
//

#include "/Users/bharatkumarbacha/Downloads/Unity-master/src/unity.h"
#include "/Users/bharatkumarbacha/Downloads/Unity-master/romanstring_to_int.h"


void test_Value_of_Average_RomanString(void)
{
    TEST_ASSERT_EQUAL_INT(521,romanstring_to_int("DXXI"));
    TEST_ASSERT_EQUAL_INT(1456,romanstring_to_int("MCDLVI"));
    TEST_ASSERT_EQUAL_INT(999,romanstring_to_int("CMXCIX"));
    
}

void test_Value_of_Highest_RomanString(void)
{
    TEST_ASSERT_EQUAL_INT(10000,romanstring_to_int("MMMMMMMMMM"));
    TEST_ASSERT_EQUAL_INT(8956,romanstring_to_int("MMMMMMMMCMLVI"));
}

void test_Value_of_Lowest_RomanString(void)
{
    TEST_ASSERT_EQUAL_INT(0,romanstring_to_int("0"));
    TEST_ASSERT_EQUAL_INT(3,romanstring_to_int("III"));
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_Value_of_Average_RomanString);
    RUN_TEST(test_Value_of_Highest_RomanString);
    RUN_TEST(test_Value_of_Lowest_RomanString);
    return UNITY_END();
    
}
