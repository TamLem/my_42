#include "./ft_putstr_non_printable.c"
#include <stdio.h>

int main()
{
	char str[] = "Coucou\n\ttu vas bien ?";
	ft_putstr_non_printable(str);
	// ft_print_hexd('\t');
	printf("\n");
	return (0);
}
// Coucou\0atu vas bien ?

