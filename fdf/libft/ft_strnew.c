#include "libft.h"

char		*ft_strnew(size_t size)
{
	size_t	i;
	char	*new;

	i = 0;
	if (!(new = (char *)malloc(size * sizeof(*new) + 1)))
		return (NULL);
	while (i <= size)
		new[i++] = '\0';
	return (new);
}
