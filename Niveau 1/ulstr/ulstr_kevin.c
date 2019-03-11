/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kberon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 13:27:16 by kberon            #+#    #+#             */
/*   Updated: 2016/07/27 13:41:02 by kberon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				av[1][i] -= 32;
				ft_putchar(av[1][i]);
				i++;
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				av[1][i] += 32;
				ft_putchar(av[1][i]);
				i++;
			}
			else
			{
				ft_putchar(av[1][i]);
				i++;
			}
		}
	}
	ft_putchar('\n');
	return (0);
}
