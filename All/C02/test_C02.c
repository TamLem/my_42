#include <stdio.h>
#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"
#include "ex10/ft_strlcpy.c"
// #include "ex11/ft_putstr_non_printable.c"
// #include "ex12/ft_print_memory.c"

int main(){
	int n = 3;
    char dest[] = "world";
    char src[] = "Hello!";
    char src2[] = "54545";
    char src3[] = "sss";
    char src4[] = "FDSFJKDLJEOIN";
    char src5[] = "HH";
    char src6[] = "Coucou tu vas bien ?";
    char src7[] = "salut, comment234f tu vas ? 42mots quarante-deux; 3cinquante+et+un";
 

	//ex00

	// ft_strcpy(dest, src);
	// printf("%s", dest);

	// //ex01

	// ft_strncpy(dest, src, n);
	// printf("%s", dest);

	// //ex02

	// printf("%d", (ft_str_is_alpha(src2)));
	// printf("\n");

	// //ex03

	// printf("%d", (ft_str_is_numeric(src2)));


	// //ex04

	// printf("%d", (ft_str_is_lowercase(src3)));

	// //ex05

	// printf("%d", (ft_str_is_uppercase(src5)));

	// //ex06

	// printf("%d", (ft_str_is_printable(src6)));

	// //ex07

	// printf("%s", (ft_strupcase(src)));
	// printf("\n");

	// //ex08

	// printf("%s", (ft_strlowcase(src)));
	// printf("\n");




    return 0;
}