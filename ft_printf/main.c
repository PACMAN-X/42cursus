#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

size_t ft_printf(char *args, ...)
{
	va_list ap;
	size_t i;

	i = 0;
	va_start(ap, args);

	while (args[i])
	{
		if (args[i] == '%')
		{
			i++;
			if (args[i] == '0')
			{
				if (args[i] ==)
			}
			if (args[i] == 'd' || args[i] == 'i' || args[i] == 'u')
				printf("%d", va_arg(ap, int));
			else if (args[i] == 'c')
				printf("%c", va_arg(ap, int));
			else if (args[i] == 's')
				printf("%s", va_arg(ap, char *));
			else if (args[i] == '%')
				printf("%c", args[i]);
		}
		else
			printf("%c", args[i]);
		i++;
	}
	va_end(ap);
	return (i);
}

int main()
{
	ft_printf("%d %i %u    %% 💚%c %s", 111, 1234, 12345, 'c', "abcd");
	return (1);
}
