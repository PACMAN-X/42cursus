#include "unistd.h"
#include "fcntl.h"
#include "stdio.h"
#include <stdlib.h>

int getlenght(char *s)
{
	int len;

	len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return len;
}