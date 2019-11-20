#include "libft.h"

char		*ft_strcat(char *dest, const char *src)
{
	char	*new;
	int		i;
	int		i2;

	i2 = 0;
	i = 0;
	new = dest;
	while (new[i])
		i++;
	while (src[i2])
		new[i++] = src[i2++];
	new[i] = '\0';
	return (new);
}
