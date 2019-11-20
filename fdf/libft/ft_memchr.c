#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*new;
	unsigned char	a;
	size_t			i;

	i = 0;
	a = (unsigned char)c;
	new = (unsigned char *)s;
	while (n != 0)
	{
		if (new[i] == a)
			return (new + i);
		i++;
		n--;
	}
	return (NULL);
}
