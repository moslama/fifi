/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:12:07 by moslama           #+#    #+#             */
/*   Updated: 2019/05/09 14:12:10 by moslama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *ps1;
	char *ps2;

	ps1 = (char*)s1;
	ps2 = (char*)s2;
	while (*ps1)
		ps1++;
	while (*ps2)
		*(ps1++) = *(ps2++);
	*ps1 = '\0';
	return (s1);
}