#include<stdio.h>
#include"increment.h"
#include"swap.h"

int main(){
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
	return 0;
}
