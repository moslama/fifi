/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kberon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 14:54:00 by kberon            #+#    #+#             */
/*   Updated: 2016/07/26 17:21:57 by kberon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while(av[1][i])
	{
		i++;
	}
	i--;
	while (av[1][i] == ' ' || av[1][i] == '\t')
		i--;
	while (av[1][i] >= 33 && av[1][i] <= 122)
		i--;
	i++;
	while ((av[1][i] != ' ') && (av[1][i] != '\t') && (av[1][i] != '\0'))
	{
		ft_putchar(av[1][i]);
		i++;
	}
	ft_putchar('\n');
	return 0;
}
