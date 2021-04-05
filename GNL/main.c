#include <stdio.h>

int main()
{
	// (1)포인터
	// int arr[3] = {1, 2, 3};
	// int *parr;

	// parr = arr;

	// printf("arr[1] : %d \n", arr[1]);
	// printf("parr[1] : %d \n", parr[1]);
	// return (0);

	// (2)평균 계산하기
	// int ourClassScore[10] = {12, 54, 87, 54, 43, 85, 12, 99, 27, 100};
	// int *temp;
	// int sum;

	// temp = ourClassScore; 
	// sum = 0;
	// while(temp - ourClassScore <= 9)
	// {
	// 	// 배열의 이름이 첫 번째 원소를 가리키는 포인터로 타입 변경 된다고 했을 때, 이는 단순히 배열의 첫 번째 원소를 가리키는 주소값 자체가 될 뿐입니다.
	// 	sum += *temp;
	// 	temp++;
	// }

	// printf("This is the average: %d \n", sum / 10);
	// return (0);

	// // 3. 2중 포인터 작성해 보기
	// int a;
	// int *aa;
	// int **aaa;

	// a = 1;
	// aa = &a;
	// aaa = &aa;

	// printf("this is the a: %d \n", a);
	// printf("this is the aa: %p \n", aa);
	// printf("this is the aaa: %p \n", aaa);
	// if( aa == *aaa)
	// 	printf("same \n");

	// return (0);
}