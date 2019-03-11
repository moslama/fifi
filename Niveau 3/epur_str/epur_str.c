#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void epur_str(char *str)
{
	int i = 0;
	int sp = -1;

	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (sp == 1)
				ft_putchar(' ');
			sp = 0;
			ft_putchar(str[i]);
		}
		else if(sp == 0)
			sp = 1;
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	ft_putchar('\n');
	return (0);
}
