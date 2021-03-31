#include <unistd.h>
#include <string.h>
#include "./ft_strlowcase.c"
#include <stdio.h>

int main()
{
	char test[] = "HAl loZ";

	printf("%s", (ft_strlowcase(test)));

	return 0;
}
