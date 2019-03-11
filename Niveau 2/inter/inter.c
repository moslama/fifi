

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	inter(char *s1, char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	while (s1[i])
	{
		j = 0;
		k = (i - 1);
		while (s2[j] && s1[i] != s2[j])
			j++;
		if (s1[i] == s2[j])
		{
			while (s1[i] != s1[k] && k > 0)
				k--;
			if (s1[i] != s1[k])
				ft_putchar(s1[i]);
		}
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if(argc != 3)
		ft_putchar('\n');
	else
		inter(argv[1], argv[2]);
	return(0);
}
