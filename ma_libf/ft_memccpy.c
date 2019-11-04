/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:09:14 by moslama           #+#    #+#             */
/*   Updated: 2019/05/09 14:09:16 by moslama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int		i;
	unsigned char		d;
	unsigned char		*ptrdst;
	unsigned const char	*ptrsrc;

	i = 0;
	d = (unsigned char)c;
	ptrdst = (unsigned char*)dst;
	ptrsrc = (unsigned const char*)src;
	while (i < n)
	{
		if ((*ptrdst++ = *ptrsrc++) == d)
			return (ptrdst);
		i++;
	}
	return (NULL);
}
