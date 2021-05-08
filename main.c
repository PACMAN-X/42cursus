#include <stdio.h>

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

	printf("this is a: %d\n", *a);
	printf("this is b: %d\n", *b);
}

int main()
{
	int a;
	int b;

	a = 0;
	b = 1;

	swap(&a, &b);

	printf("this is a in main: %d\n", a);
	printf("this is b in main: %d\n", b);
	return (0);
}