#include "libft.h"

void	ft_strclr(char *str)
{
	int i;

	i = 0;
	while (str != NULL && str[i])
		str[i++] = '\0';
}
