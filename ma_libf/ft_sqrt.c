/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 11:21:26 by moslama           #+#    #+#             */
/*   Updated: 2019/04/23 11:21:32 by moslama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int nb)
{
	int root;

	root = 1;
	while (root * root != nb)
	{
		if (root / 2 > nb)
		{
			break ;
		}
		root++;
	}
	if (root * root == nb)
		return (root);
	return (0);
}
