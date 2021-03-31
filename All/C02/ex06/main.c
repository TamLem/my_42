#include <unistd.h>
#include <string.h>
#include "./ft_str_is_printable.c"
#include <stdio.h>

int main()
{
	char test[] = "\0\t";
	printf("%d", (ft_str_is_printable(test)));

	return 0;
}
