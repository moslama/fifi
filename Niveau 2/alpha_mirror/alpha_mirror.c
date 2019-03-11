

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')  //ex = str[i] = 'b' = 98;
			ft_putchar(122 - (str[i] - 97));	// ft_putchar(122 - ( 98 - 97)) = 121 = 'y';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar('Z' - (str[i] - 'A'));
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
		alpha_mirror(argv[1]);
	return (0);
}
