#include <unistd.h>
#include "./ft_strlcpy.c"
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}


unsigned int strlcpy(char *dst, const char *src, unsigned int siz)
{
	char *d = dst;
	const char *s = src;
	unsigned int n = siz;

	/* Copy as many bytes as will fit */
	if (n != 0) {
		while (--n != 0) {
			if ((*d++ = *s++) == '\0')
				break;
		}
	}

	/* Not enough room in dst, add NUL and traverse rest of src */
	if (n == 0) {
		if (siz != 0)
			*d = '\0';		/* NUL-terminate dst */
		while (*s++)
			;
	}

	return(s - src - 1);	/* count does not include NUL */
}

int main()
{
	char src[] = "123";
	char dest[] = "asasa";
	char des[] = "hello";
	unsigned int n = 0;
	
	printf("%u\n", ft_strlcpy(dest, src, n));
	printf("%s\n", dest);
	ft_putchar('\n');

	return 0;
}