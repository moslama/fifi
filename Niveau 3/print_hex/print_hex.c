#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int atoi(char *str)
{
	int i = 0;
	int neg = 0;
	int res = 0;

	while (str[i] && (str[i] == '\t' || str[i] == '\n' ||
				str[i] == '\r' || str[i] == ' '))
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	if ( neg == -1)
		return (-res);
	else
		return (res);
}

void print_hex(int nb)
{
	if (nb >= 16)
		print_hex(nb / 16);
	if (nb % 16 < 10)
		ft_putchar((nb % 16) + 48);
	else
		ft_putchar((nb % 16) - 10 + 97);
}


int main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (atoi(argv[1]) != -1)
			print_hex(atoi(argv[1]));
	}
	write(1, "\n", 1);
	return (0);
}
