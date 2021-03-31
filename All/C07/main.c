#include <stdio.h>
#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
#include "ex03/ft_strjoin.c"


	#include <unistd.h>

		void	ft_putstr(char *str)
		{
			int i;

			i = 0;
			while (str[i] != '\0')
			{
				write(1, &str[i], 1);
				i++;
			}
		}
int main()
{
	//ex00
	// char *src = "HEllo";
	// char *dest = ft_strdup(src);

	// printf("%lu", sizeof(src));
	// printf("%s", dest);

	//ex01
	// int min = 2;
	// int max = 5;
	// int i = 0;
	// int *p = ft_range(2, 5);

	
	// if ( p == 0)
	// 	printf("null");
	// while (min < max)
	// {
	// 	printf("%d", p[i]);
	// 	min++;
	// 	i++;
	// }	

	//ex02
	// int min = 2;
	// int max = 10;
	// int i = 0;
	// int *arr;
	// int **arr2;

	// arr2 = &arr;

	// int p = ft_ultimate_range(arr2, 2, 5);

	// if (*arr2 == 0)
	// 	printf("Null");

	// arr2 = &arr;

	// while (min < max)
	// {
	// 	printf("%d\n", p);
	// 	min++;
	// 	i++;
	// }	


	//ex03
	#include <stdio.h>

    char *tab[6];
    tab[0] = "hi";
    tab[1] = "how";
    tab[2] = "are";
    tab[3] = "you";
    tab[4] = "today";
    tab[5] = "123";

    ft_putstr(ft_strjoin(6, tab, "---"));

	return (0);
}