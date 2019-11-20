#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*new;

	if (!(new = (char *)malloc(sizeof(*new) * size)))
		return (NULL);
	ft_memset(new, 0, size);
	return (new);
}
