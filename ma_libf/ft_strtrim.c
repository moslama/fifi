/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:17:03 by moslama           #+#    #+#             */
/*   Updated: 2019/05/09 14:17:05 by moslama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char *str)
{
	int		len;

	len = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	while (*(str))
	{
		len++;
		str++;
	}
	if (len)
		str--;
	while (*str == ' ' || *str == '\n' || *str == '\t')
	{
		len--;
		str--;
	}
	return (len);
}

char		*ft_strtrim(char const *s)
{
	int		len;
	int		tmp;
	char	*dst;
	char	*str;

	if (!s)
		return (NULL);
	str = (char*)s;
	len = ft_len(str);
	if ((dst = (char*)malloc(sizeof(char) * (len + 1))) == 0)
		return (NULL);
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	tmp = len;
	while (len--)
		*(dst++) = *(str++);
	*dst = '\0';
	return (dst - tmp);
}
