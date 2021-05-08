#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
	int fd;
	int rst;
	char *line;

	fd = open("text1.txt", O_RDONLY);
	while (0 < (rst = get_next_line(fd, &line)))
	{
		printf("%4d: [%s]\n", rst, line);
		// free(line);
	}
	printf("%4d: [%s]\n", rst, line);
	// free(line);

	return (1);
}
