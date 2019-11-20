#include "libft.h"

void	ft_putendl(char const *str)
{
	int i;

	i = 0;
	while (str != NULL && str[i])
		ft_putchar(str[i++]);
	ft_putchar('\n');
}
