#include <util.h>

int main()
{
	char *arr = "ab";

	printf("변경전 주소: %p\n", arr);
	printf("변경전 값: %c\n", arr[0]);
	arr = arr + 1;
	(arr - 1)[0] = 0;
	printf("변경후 주소: %p\n", arr);
	printf("변경후 값: %c\n", (arr - 1)[0]);
}
