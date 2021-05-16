#include <stdio.h>
#include <limits.h>

int main()
{
	static char *back_up[OPEN_MAX];
	char	buf[1];

	buf[0] = "b";
	back_up[0] = buf;
	
	printf("✅ back_up: %s\n", back_up[0]);
	return (0);
}
