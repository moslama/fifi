/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:16:36 by moslama           #+#    #+#             */
/*   Updated: 2019/05/09 14:16:40 by moslama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_strlenc(char *s, char c)
{
	int				i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char			*ft_strndupsplit(const char *s, size_t n)
{
	unsigned int	i;
	char			*cpy;

	cpy = (char*)malloc(sizeof(*cpy) * (n + 1));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

static int			ft_word_count(const char *s, char c)
{
	int				count;
	int				i;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char				**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	char			**array;

	i = 0;
	if (!s)
		return (NULL);
	if ((array = (char**)(malloc(sizeof(char*) * (ft_word_count(s, c) \
							+ 1)))) == NULL)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			array[i] = ft_strndupsplit(s, ft_strlenc((char*)s, c));
			s = s + (ft_strlenc((char*)s, c) - 1);
			i++;
		}
		s++;
	}
	array[i] = 0;
	return (array);
}
