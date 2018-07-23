#include<stdio.h>
#include"increment.h"
#include"swap.h"
#include"/Users/devangmotwani/Git_Repo/unity/src/unity.h"

void testIncrementForInput1(void){
        int a=1;
        int previous=a;
        increment(&a);
        TEST_ASSERT (previous+1 == a);
}

void testIncrementForInput10(void){
        int a=1;
        int previous=a;
        increment(&a);
        TEST_ASSERT (previous+1 == a);
}

void testIncrementForInput100(void){
        int a=1;
        int previous=a;
        increment(&a);
        TEST_ASSERT (previous+1 == a);
}

void testIncrementForInput1000(void){
        int a=1;
        int previous=a;
        increment(&a);
        TEST_ASSERT (previous+1 == a);
}

void testIncrementForInput10000(void){
        int a=1;
        int previous=a;
        increment(&a);
        TEST_ASSERT (previous+1 == a);
}

int main(){
	UNITY_BEGIN();

	RUN_TEST(testIncrementForInput1);
	RUN_TEST(testIncrementForInput10);
	RUN_TEST(testIncrementForInput100);
	RUN_TEST(testIncrementForInput1000);
	RUN_TEST(testIncrementForInput10000);
	return UNITY_END();
}

