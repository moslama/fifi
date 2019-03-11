
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*rot_one(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'y')
		{
			str[i] = str[i] + 1;
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Y')
		{
			str[i] = str[i] + 1;
			i++;
		}
		else if (str[i] == 'Z' || str[i] == 'z')
    	{
      		str[i] = str[i] - 25;
			i++;
    	}
    	else
    		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("\n");
		return (0);
	}
	ft_putstr(rot_one(argv[1]));
	write(1, "\n", 1);
	return (0);
}
