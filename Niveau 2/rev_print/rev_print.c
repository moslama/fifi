/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbourdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 12:55:34 by anbourdi          #+#    #+#             */
/*   Updated: 2016/07/22 14:09:29 by anbourdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	 main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		while(argv[1][i])
		{
			i++;
		}
		i--;
		while (argv[1][i])
		{
			ft_putchar(argv[1][i]);
			i--;
		}
	}
	ft_putchar('\n');
	return (0);
}
