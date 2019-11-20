#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
