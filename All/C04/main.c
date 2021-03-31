// #include "./ex00/ft_strlen.c"
// #include "./ex01/ft_putstr.c"
// #include "./ex02/ft_putnbr.c"
// #include "./ex03/ft_atoi.c"
#include "./ex04/ft_putnbr_base.c"
#include "./ex05/ft_atoi_base.c"

#include <stdio.h>

int	main(){

	//ex00
	// char *str = "HEllo World";
	// printf("%d", ft_strlen(str));

	//ex01
	// char *str = "HEllo World";
	// ft_putstr(str);

	//ex02
	// int n = 2147483647;
	// ft_putnbr(n);
	// printf("\n");
	
	//ex03
	// printf("%d\n", ft_atoi( "    \v \t---+--+a256 3"));

	//ex04
	int n = -2147483648;
	ft_putnbr_base(n, "0123456789");
	printf("\n");

	//ex05
	// int n = 5;
	// int foo = 0x48;
	// ft_atoi_base(" ---+--+256b567", "ab");
	// printf("%c\n", (char)foo);
	
	return (0);
}