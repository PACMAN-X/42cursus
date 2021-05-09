#include "util.h"

int gnl(char **input)
{
	int size_of_str;
	char *buf;
	int i;

	i = 0;
	size_of_str = 10;
	buf = (char *)malloc(sizeof(char) * size_of_str);

	buf = "abcdef";

	while (i < 4)
	{
		*input[i] = buf[i];
		i++;
	}

	*input = buf;

	return (0);
}

// int gnl(char *input)
// {
// 	int size_of_str;
// 	char *buf;

// 	size_of_str = 10;
// 	buf = (char *)malloc(sizeof(char) * size_of_str);

// 	buf = "abcdef";

// 	input = buf;

// 	printf("%p\n", input);
// 	printf("%s\n", input);

// 	return (0);
// }