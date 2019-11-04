/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:15:11 by moslama           #+#    #+#             */
/*   Updated: 2019/05/09 14:15:13 by moslama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	j;
	char			*str;
	char			*dest;

	i = 0;
	j = 0;
	str = (char*)s;
	while (str != NULL && str[i])
		i++;
	if ((dest = (char*)malloc(sizeof(char) * (i + 1))) == 0)
		return (NULL);
	while (str != NULL && *str)
		*(dest++) = f(j++, *(str++));
	*dest = '\0';
	return (dest - i);
}
