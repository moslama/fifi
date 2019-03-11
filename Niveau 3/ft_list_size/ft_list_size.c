

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list		*liste;
	int			i;

	i = 0;
	if (!begin_list)
		return (0);
	liste = begin_list;
	while (liste)
	{
		liste  = liste->next;
		i++;
	}
	return (i);
}
