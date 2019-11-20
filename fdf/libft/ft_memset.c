#include "libft.h"

void		*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*new;

	i = 0;
	if (n == 0)
		return (s);
	new = s;
	while (i < n)
	{
		new[i++] = c;
	}
	return (s);
}
