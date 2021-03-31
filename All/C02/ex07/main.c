#include <unistd.h>
#include <string.h>
#include "./ft_strupcase.c"
#include <stdio.h>

int main()
{
	char test[] = "Hal lo";

	printf("%s", (ft_strupcase(test)));

	return 0;
}
