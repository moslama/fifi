#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	unsigned int n;

	n = nb;
	if (nb < 0)
	{
		n = -nb;
		ft_putchar('-');
	}
	if (nb > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else 
		ft_putchar(n + '0');
}

int pgcd(int a, int b)
{
	int pgcd;

	while(a != b)
	{
		if(a > b)
			a = a - b;
		else
			b = b - a;
		pgcd = a;                                                 
	}
	return (pgcd);
}

int main()
{
	ft_putnbr(pgcd(33, 44));
	return (0);
}
