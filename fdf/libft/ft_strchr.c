#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*new;

	new = (char *)s;
	while (*new != c)
	{
		if (*new == '\0')
			return (NULL);
		new++;
	}
	return (new);
}
