#include <unistd.h>
#include <string.h>
#include "./ft_str_is_numeric.c"
#include <stdio.h>

int main()
{
	char test[] = "9";
	printf("%d", (ft_str_is_numeric(test)));

	return 0;
}
