#include <unistd.h>
#include <string.h>
#include "./ft_strcapitalize.c"
#include <stdio.h>

int main()
{
	char test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", (ft_strcapitalize(test)));

	return 0;
}
// Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
