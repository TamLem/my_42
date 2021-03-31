#include <string.h>
#include <stdio.h>
#include "./ex00/ft_strcmp.c"

int main()
{
	char s1[] = "sdsdsd";
	char s2[] = "sdsds";

	printf("%d\n", (strcmp(s1, s2)));
	printf("%d\n", (ft_strcmp(s1, s2)));

	
}