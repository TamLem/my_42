#include <unistd.h>
#include <string.h>
#include "./ft_strncpy.c"
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

int main()
{
	char src[] = "123456789";
	char dest[] = "";
	char des[] = "";
	unsigned int n = 7;
	
	ft_putstr((strncpy(des, src, n)));
	ft_putchar('\n');

	// ft_putstr((ft_strncpy(dest, src, n)));
	ft_putchar('\n');

	return 0;
}