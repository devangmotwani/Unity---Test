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

int main(){
	UNITY_BEGIN();

	RUN_TEST(testIncrementForInput1);
        /*
	int a=20;
        int b=30;
        printf("Value before increment call: %d \n",a);
        increment(&a);
        printf("Value after increment() call: %d \n",a);
        printf("Value of a before call: %d\t",a);
        printf("Value of b before call: %d\t",b);
        swap(&a,&b);
        printf("Value of a: %d\t",a);
        printf("Value of b: %d\t",b);
        return 0;*/
	return UNITY_END();
}

