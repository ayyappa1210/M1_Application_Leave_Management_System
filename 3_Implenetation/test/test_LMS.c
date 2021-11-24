#include "unity.h"
#include "LMS.h"

void setUp()
{

}
void tearDown()
{

}

void test_gotoxy(void)
{
    int x=30,y=12;
    TEST_ASSERT_EQUAL(30,x);
    TEST_ASSERT_EQUAL(12,y);
    x=10,y=14;
    TEST_ASSERT_EQUAL(10,x);
    TEST_ASSERT_EQUAL(14,y);
    x=25,y=11;
    TEST_ASSERT_EQUAL(25,x);
    TEST_ASSERT_EQUAL(11,y);
}

int main(void)
{
    /*Initiate the unity test framework*/
    UNITY_BEGIN();
    RUN_TEST(test_gotoxy);
    /* Close the unity testing framework*/
    UNITY_END();
}