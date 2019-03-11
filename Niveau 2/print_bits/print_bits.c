/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhanot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 16:14:34 by adhanot           #+#    #+#             */
/*   Updated: 2016/07/28 16:18:28 by adhanot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int i;

	i = 128;
	while (i > 0)
	{
		if (i & octet)
			ft_putchar('1');
		else
			ft_putchar('0');
		i /= 2;
	}
	ft_putchar('\n');
}
int main()
{
	print_bits(2);
	return 0;
}
