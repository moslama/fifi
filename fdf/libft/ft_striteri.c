#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	int i;

	i = 0;
	if (str == NULL || f == NULL)
		return ;
	while (str != NULL && *str)
	{
		f(i, str++);
		i++;
	}
}
