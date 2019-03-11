/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhanot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 17:30:01 by adhanot           #+#    #+#             */
/*   Updated: 2016/07/27 17:50:36 by adhanot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
	while ((av[1][i] >= 33 && av[1][i] <= 126) && (av[1][i] != ' ' && av[1][i] != '\t'))
	{
		ft_putchar(av[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
