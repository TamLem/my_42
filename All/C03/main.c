#include <string.h>
#include <stdio.h>
// #include "./ex00/ft_strcmp.c"
// #include "./ex01/ft_strncmp.c"
// #include "./ex02/ft_strcat.c"
// #include "./ex03/ft_strncat.c"
#include "./ex04/ft_strstr.c"
// #include "./ex05/ft_strlcat.c"


unsigned int
strlcat(dst, src, siz)
	char *dst;
	const char *src;
	size_t siz;
{
	char *d = dst;
	const char *s = src;
	unsigned int n = siz;
	unsigned int dlen;

	/* Find the end of dst and adjust bytes left but don't go past end */
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;

	if (n == 0)
		return(dlen + strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return(dlen + (s - src));	/* count does not include NUL */
}




int main()
{
	char s1[] = "cd";
	char s2[] = "";
	// char dest[] ="";
	// unsigned int n = 4;

	// s1[6] = 'p';

	// ex00
	// printf("%d\n", (strcmp(s1, s2)));
	// printf("%d\n", (ft_strcmp(s1, s2)));

	//ex01
	// printf("%d\n", (strncmp(s1, s2, n)));
	// printf("%d\n", (ft_strncmp(s1, s2, n)));

	//ex02
	// printf("%lu\n", (ft_strlen(dest)));
	// printf("%s\n", (ft_strcat(dest, s1)));
	// printf("%s\n", (strcat(dest, s1)));

	// ex03
	// printf("%lu\n", (ft_strlen(dest)));
	// printf("%s\n", (ft_strncat(dest, s1, n)));
	// printf("%s\n", (strncat(dest, s1, n)));

	
	// ex04
	printf("%s\n", ft_strstr(s1, s2));
	printf("%s\n", strstr(s1, s2));
	printf("%p\n", s1);

	//ex05
	// printf("%u\n", ft_strlcat(dest, s1, sizeof(dest)));
	// printf("%u\n", strlcat(dest, s1, sizeof(dest)));
	// printf("%s\n", dest);

	
	return 0;
}

