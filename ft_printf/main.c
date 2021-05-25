#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

size_t ft_strlen(char *s)
{
	size_t len;

	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;

	return (len);
}

void ft_putchar(char *c)
{
	write(1, c, ft_strlen(c));
}

long int ft_abs(long int n)
{
	return ((n < 0) ? -n : n);
}

int get_len_of(long int n)
{
	int len;

	len = (n <= 0) ? 1 : 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void *ft_memset(void *b, int c, int len)
{
	unsigned char *p;

	p = b;
	while (len-- > 0)
	{
		*p = c;
		p++;
	}
	return (b);
}

void *ft_calloc(size_t count, size_t size)
{
	char *buf;

	if (!(buf = malloc(size * count)))
		return (NULL);
	ft_memset(buf, 0, count * size);
	return (buf);
}

char *ft_itoa(int n)
{
	int len;
	int sign;
	char *str;

	sign = (n < 0) ? -1 : 0;
	len = get_len_of(n);
	if (!(str = (char *)ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	str[len] = '\0';
	while (len-- > 0)
	{
		str[len] = '0' + ft_abs(n % 10);
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}

size_t ft_printf(char *args, ...)
{
	va_list ap;
	size_t i;

	i = -1;
	va_start(ap, args);

	while (args[++i])
	{
		if (args[i] == '%')
		{
			switch (args[++i])
			{
			case 'd':
			case 'i':
			case 'u':
				ft_putchar(ft_itoa(va_arg(ap, int)));
				break;
			case 'x':
				ft_putchar(va_arg(ap, int));
				break;
			case 'X':
				ft_putchar(va_arg(ap, int));
				break;
			case 'p':
				ft_putchar(va_arg(ap, int));
				break;
			default:
				break;
			}
			printf("%d", args[i]);
		}
	}

	va_end(ap);
	return (i);
}

int main()
{
	ft_printf("%d", 111);
	return (1);
}
