#include "BoreMotor.h"
#include "unity.h"
#include<unity_internals.h>
#include<unity.h>
void setUp(){}
void tearDown(){}
void test_Texmo(void){
    TEST_ASSERT_EQUAL(17300,test_Texmo(1, 1, 1));
}
void test_Kirloskar(void){
    TEST_ASSERT_EQUAL(0,test_Kirloskar());
}
void test_CRI(void){
    TEST_ASSERT_EQUAL(1,CRI(-2));
    
}
void test_Taro(void){
    TEST_ASSERT_EQUAL(1,test_Taro(125));
}        


int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_Texmo);
    RUN_TEST(test_Kirloskar);
    RUN_TEST(test_CRI);
    RUN_TEST(test_Taro);
    
    return UNITY_END();
}