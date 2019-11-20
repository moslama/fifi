#include "libft.h"

void	ft_putstr(char const *str)
{
	int i;

	i = 0;
	while (str != NULL && str[i])
		ft_putchar(str[i++]);
}
