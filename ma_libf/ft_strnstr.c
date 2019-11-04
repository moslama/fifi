/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:16:11 by moslama           #+#    #+#             */
/*   Updated: 2019/05/09 14:16:16 by moslama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*large;
	char	*small;
	size_t	i;

	large = (char*)big;
	small = (char*)little;
	if (*small == '\0')
		return (large);
	i = ft_strlen(small);
	while (*large && len-- >= i)
	{
		if (*large == *small && ft_memcmp(large, small, i) == 0)
			return (large);
		large++;
	}
	return (NULL);
}
