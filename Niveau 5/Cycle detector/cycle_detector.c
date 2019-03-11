#include "list.h"

int        cycle_detector(const t_list *list)
{
	const t_list *tmp1;
	const t_list *tmp2;

	tmp1 = list;
	while (list && (tmp2 = tmp1->next) && (tmp1 = tmp2->next))
	{
		if ((list == tmp1) || (list == tmp2))
			return (1);
		list = list->next;
	}
	return (0);
}
