/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:09:01 by moslama           #+#    #+#             */
/*   Updated: 2019/05/09 14:09:04 by moslama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *mem;

	if ((mem = (char*)malloc(sizeof(char) * size)) == 0)
		return (NULL);
	while ((int)--size >= 0)
		*(mem + size) = '\0';
	return (mem);
}
