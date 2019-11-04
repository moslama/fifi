/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:07:43 by moslama           #+#    #+#             */
/*   Updated: 2019/05/09 14:07:46 by moslama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** free the memory of the link and all following links
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *newlst;
	t_list *nextlst;

	newlst = *alst;
	while (newlst)
	{
		nextlst = newlst->next;
		del(newlst->content, newlst->content_size);
		free(newlst);
		newlst = nextlst;
	}
	*alst = NULL;
}
