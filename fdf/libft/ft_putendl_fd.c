#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
