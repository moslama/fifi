#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen((char *)src);
	while (i < n)
	{
		if (i < len)
		{
			dest[i] = src[i];
			i++;
		}
		else
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
