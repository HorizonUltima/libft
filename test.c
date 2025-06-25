#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char s1[500];
	char *strjoin;

	s1[0] = 0;
	if (!(strjoin = ft_strjoin(s1, "dolor sit amet")))
		printf("NULL");
	else
		printf("%s", strjoin);
}
