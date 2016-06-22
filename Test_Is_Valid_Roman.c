#include "/Users/bharatkumarbacha/Downloads/Unity-master/src/unity.h"
#include "/Users/bharatkumarbacha/Downloads/Unity-master/Is_Valid_Roman.h"


void test_All_The_Roman_Literals(void)
{
    TEST_ASSERT_TRUE(Is_Valid_Roman("I"));
    TEST_ASSERT_TRUE(Is_Valid_Roman("V"));
    TEST_ASSERT_TRUE(Is_Valid_Roman("X"));
    TEST_ASSERT_TRUE(Is_Valid_Roman("L"));
    TEST_ASSERT_TRUE(Is_Valid_Roman("C"));
    TEST_ASSERT_TRUE(Is_Valid_Roman("D"));
    TEST_ASSERT_TRUE(Is_Valid_Roman("M"));
}

void test_Other_Literals(void)
{
    TEST_ASSERT_TRUE(Is_Valid_Roman("A"));
    TEST_ASSERT_TRUE(Is_Valid_Roman("2"));
    TEST_ASSERT_TRUE(Is_Valid_Roman("8"));
    TEST_ASSERT_TRUE(Is_Valid_Roman("9"));
    TEST_ASSERT_TRUE(Is_Valid_Roman("Z"));
    TEST_ASSERT_TRUE(Is_Valid_Roman("G"));
    TEST_ASSERT_TRUE(Is_Valid_Roman("P"));
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_All_The_Roman_Literals);
    RUN_TEST(test_Other_Literals);
    return UNITY_END();
    
}
