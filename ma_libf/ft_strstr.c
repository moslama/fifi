/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:16:47 by moslama           #+#    #+#             */
/*   Updated: 2019/05/09 14:16:50 by moslama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int				len;
	char			*ptr;

	ptr = (char *)big - 1;
	if (!*little)
		return (++ptr);
	while (*(++ptr))
	{
		len = 0;
		while (*(ptr++) == little[len] && little[len])
			len++;
		ptr -= (len + 1);
		if (!little[len])
			return (ptr);
	}
	return (NULL);
}
