#include <stdio.h>

static int average;

void sum(int count)
{
	int input;

	input = 0;
	if (count > 1)
		sum(count - 1);

	printf("%d 번째 학생의 점수는?", count);
	scanf("%d", &input);

	average = average + input;
}

int main()
{
	int count;
	const int const_count = 10;
	int arr[const_count];

	count = 0;

	printf("몇명의 학생이 있습니까?");
	scanf("%d", &count);

	sum(count);

	printf("평균점수는 : %d\n", average / count);
	return (0);
}