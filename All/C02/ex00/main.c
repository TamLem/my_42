#include <unistd.h>
#include <string.h>
#include "./ft_strcpy.c"

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
	char src[] = "Hello";
	char dest[] = "wossdsdsd";
	char des[] = "wosdsdsdssd";

	
	ft_putstr((strcpy(des, src)));
	ft_putchar('\n');

	ft_putstr((ft_strcpy(dest, src)));
	ft_putchar('\n');

	return 0;
}