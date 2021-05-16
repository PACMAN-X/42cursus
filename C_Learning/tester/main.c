#include "main.h"

char **test()
{
	static char *buf[OPEN_MAX];

	buf[0] = "abc";
	return (buf);
}

int main()
{
	// char *back_up[OPEN_MAX];
	// char buf[BUFFER_SIZE + 1];
	// int fd;
	// int read_value;

	char name = "abcd";

	printf("✅%c\n", name);
	// printf("✅%s\n", *test());

	// printf("✅%s\n", buf);

	// back_up[0] = "abc";
	// fd = open("text1.txt", O_RDONLY);
	// while ((read_value = read(fd, buf, BUFFER_SIZE)) > 0)
	// {
	// 	printf("✅");
	// }
	/*같은 것 찾기*/
	// printf("✅ back_up[0]: %p\n", back_up[0]);
	// printf("✅ back_up[0]: %s\n", back_up[0]);
	// printf("✅ *back_up: %p\n", *back_up);
	// printf("✅ back_up: %p\n", back_up);
	// printf("✅ &back_up[0]: %p\n", &back_up[0]);
	// printf("✅ &back_up: %p\n", &back_up);
	return (0);
}
