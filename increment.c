#include"increment.h"

void increment(int *a){
	(*a)++;
	//Increment the value by reference
}

void incorrect_increment(int a){
	a++;
}
