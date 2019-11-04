/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:14:56 by moslama           #+#    #+#             */
/*   Updated: 2019/05/09 14:14:59 by moslama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*str;
	char			*dest;

	i = 0;
	str = (char*)s;
	while (str != NULL && str[i])
		i++;
	if ((dest = (char*)malloc(sizeof(char) * (i + 1))) == 0)
		return (NULL);
	while (str != NULL && *str)
		*(dest++) = f(*(str++));
	*dest = '\0';
	return (dest - i);
}
