#include<stdio.h>
#include"increment.h"
#include"swap.h"
#include"/Users/devangmotwani/Git_Repo/unity/src/unity.h"

void testIncrementForInput1(void){
        int a=1;
        int previous=a;
        incorrect_increment(a);
        TEST_ASSERT_MESSAGE (previous+1 == a,"This is to test incorrect method");
} //Redudant

void testIncrementForInput10(void){
        int a=1;
        int previous=a;
        increment(&a);
        TEST_ASSERT (previous+1 == a);
} //Redundant

void testIncrementForInput100(void){
        int a=1;
        int previous=a;
        increment(&a);
        TEST_ASSERT (previous+1 == a);
} //Redundant

void testIncrementForInput1000(void){
        int a=1;
        int previous=a;
        increment(&a);
        TEST_ASSERT (previous+1 == a);
} //Redundant

void testIncrementForInput10000(void){
        int a=1;
        int previous=a;
        increment(&a);
        TEST_ASSERT (previous+1 == a);
} //Redundant

void testIncrementForInput1To10000(void){
        int a;
	for (a=1;a<=10000;){
        	int previous=a;
	        increment(&a);
        	TEST_ASSERT (previous+1 == a);
	}
}

void testSwap(void){
	int a=20,b=30;
	int after_swap_a=30, after_swap_b=20;
	swap(&a,&b);
	TEST_ASSERT (a==after_swap_a);
	TEST_ASSERT (b==after_swap_b);
}

int main(){
	UNITY_BEGIN();

	RUN_TEST(testIncrementForInput1);
	RUN_TEST(testIncrementForInput10);
	RUN_TEST(testIncrementForInput100);
	RUN_TEST(testIncrementForInput1000);
	RUN_TEST(testIncrementForInput10000);
	RUN_TEST(testIncrementForInput1To10000);
	RUN_TEST(testSwap);
	return UNITY_END();
}

