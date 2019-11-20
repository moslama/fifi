#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	void *new_list;

	while (*alst != NULL)
	{
		new_list = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = new_list;
	}
	*alst = NULL;
}
