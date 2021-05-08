#include <stdio.h>

extern int number;

void secondFunc()
{
	number++;
	printf("this is the number value: %d, %p\n", number, &number);
}