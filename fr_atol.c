#include "libft.h"

int	ft_atol(const char *str)
{
	long i;
	int	change;
	int	res;

	i = 0;
	change = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			change = -1;
		i++;
	}
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * change);
}
/*
#include <stdio.h>
int	main(void)
{
	int	res;
	int	res2;
	char	str[] = "12-365";

	res = ft_atoi(str);
	res2 = atoi(str);
	printf("MY ATOI  : %d\n", res);
	printf("ATOI ORIGINAL : %d\n", res2);
	return (0);
}*/
