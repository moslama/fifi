#include "libft.h"

char	*ft_strcpy(char *dest, char const *src)
{
	int i;
	int i2;

	i = 0;
	i2 = ft_strlen((char *)src);
	while (i < i2)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
