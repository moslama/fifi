/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:05:19 by moslama           #+#    #+#             */
/*   Updated: 2019/05/09 14:05:29 by moslama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** returns len size of array
*/

size_t		ft_arraylen(const void *array)
{
	size_t	size;

	size = 0;
	while (((void **)array)[size] != NULL)
		size++;
	return (size);
}
