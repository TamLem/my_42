#include <unistd.h>
#include <string.h>
#include "./ft_str_is_alpha.c"
#include <stdio.h>

int main()
{
	char test[] = "abCZ";
	printf("%d", (ft_str_is_alpha(test)));

	return 0;
}