#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	void	*new;

	while (lst != NULL)
	{
		new = lst->next;
		f(lst);
		lst = new;
	}
	lst = NULL;
}
