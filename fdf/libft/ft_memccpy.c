#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((char *)src)[i] == c)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
			return (dest + i);
		}
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (NULL);
}
