/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:13:32 by moslama           #+#    #+#             */
/*   Updated: 2019/05/09 14:13:34 by moslama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strequ(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;

	if (s1 == NULL || s2 == NULL)
		return (0);
	str1 = (char*)s1 - 1;
	str2 = (char*)s2 - 1;
	while (*(++str1) == *(++str2) && *str1 && *str2)
		;
	if (!(*str1) && !(*str2))
		return (1);
	return (0);
}
