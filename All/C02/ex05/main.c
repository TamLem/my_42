#include <unistd.h>
#include <string.h>
#include "./ft_str_is_uppercase.c"
#include <stdio.h>

int main()
{
	char test[] = "TH\0";
	printf("%d", (ft_str_is_uppercase(test)));

	return 0;
}
