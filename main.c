#include "inc/ft_printf.h"

int main()
{
	char *str = "ekip";
	char c = '!';
	char d = '.';
	unsigned int p = 300;
	int a = -1;

	printf("%d\n", ft_printf("ft : %s %c %% %c | %u %x %X | %d %i | %p\n", str, c, d, p, p, p, a, a, str));
	printf("%d\n", printf("rl : %s %c %% %c | %u %x %X | %d %i | %p\n", str, c, d, p, p, p, a, a, str));

	return (0);
}
