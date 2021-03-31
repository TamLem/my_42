#include <unistd.h>
#include <string.h>
#include "./ft_str_is_lowercase.c"
#include <stdio.h>

int main()
{
	char test[] = "as\tdsz";
	printf("%d", (ft_str_is_lowercase(test)));

	return 0;
}
