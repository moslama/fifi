#include <stdlib.h>

int		count(unsigned int unb, int base)
{
	int	i;

	i = 0;
	if (unb == 0)
		return (1);
	while (unb > 0)
	{
		unb = unb / base;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(int value, int base)
{
	unsigned int	unb;
	int				sign;
	int				i;
	char			*res;

	sign = 0;
	if (value >= 0)
		unb = value;
	else
	{
		if (base == 10)
			sign = 1;
		unb = -1 * value;
	}
	i = count(unb, base) + sign;
	res = (char *)malloc(sizeof(char) * i + 1);
	res[i] = '\0';
	i--;
	if (unb == 0)
		res[i] = '0';
	while (unb > 0)
	{
		if ((unb % base) <= 9)
			res[i] = (unb % base) + '0';
		else
			res[i] = (unb % base) + 'A' - 10;
		unb = unb / base;
		i--;
	}
	if (sign == 1)
		res[i] = '-';
	return (res);
}

