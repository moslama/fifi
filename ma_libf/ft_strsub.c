/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:16:55 by moslama           #+#    #+#             */
/*   Updated: 2019/05/09 14:16:57 by moslama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*sect;
	char			*str;
	unsigned int	i;

	str = (char*)s;
	i = 0;
	if ((sect = (char*)malloc(sizeof(char) * (len + 1))) == 0)
		return (NULL);
	while (str != NULL && str[i + start] && len--)
	{
		sect[i] = str[i + start];
		i++;
	}
	sect[i] = '\0';
	return (sect);
}
