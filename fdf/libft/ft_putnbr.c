#include "libft.h"

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb < -9)
			ft_putnbr((nb / 10) * -1);
		ft_putnbr((nb % 10) * -1);
		return ;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar('0' + (nb % 10));
}
