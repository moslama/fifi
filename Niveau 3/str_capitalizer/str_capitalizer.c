

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	parse_str(char *s)
{
	int		i;
	char	c;

	i = 0;
	while (s[i])
	{
		while (s[i] && (s[i] == ' ' || s[i] == '\t'))
		{
			ft_putchar(s[i]);
			i++;
		}
		if (!s[i])
			return ;
		if (s[i] >= 'a' && s[i] <= 'z')
			c = s[i++] - 32;
		else
			c = s[i++];
		ft_putchar(c);
		while (s[i] && s[i] != ' ' && s[i] != '\t')
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				c = s[i] + 32;
			else
				c = s[i];
			ft_putchar(c);
			i++;
		}
	}
}

void	str_capitalizer(int nb, char **tab)
{
	int		i;

	i = -1;
	while (++i < nb)
	{
		parse_str(tab[i]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		str_capitalizer(argc - 1, &argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
