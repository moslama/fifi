#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		if (nb < -9)
			ft_putnbr_fd((nb / 10) * -1, fd);
		ft_putnbr_fd((nb % 10) * -1, fd);
		return ;
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd('0' + (nb % 10), fd);
}
