#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(*new))))
		return (NULL);
	if (!content)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = malloc(sizeof(content));
		if (new->content == NULL)
			return (NULL);
		ft_memcpy((new->content), content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
