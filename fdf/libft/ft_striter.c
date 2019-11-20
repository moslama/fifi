#include "libft.h"

void	ft_striter(char *str, void (*f)(char *))
{
	if (str == NULL || f == NULL)
		return ;
	while (str != NULL && *str)
		f(str++);
}
