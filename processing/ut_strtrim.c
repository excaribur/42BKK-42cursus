#include <stdio.h>

#include "../libft.h"

int main()
{
	char *s1 = "  \t \t \n   \n\n\n\t";
	char *s2 = "";
	char *ret = ft_strtrim(s1, " \n\t");

	printf("ans:%s\n", s2);
	printf("you:%s\n", ret);
}