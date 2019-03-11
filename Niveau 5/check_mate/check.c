#include "check.h"

int ft_strlen(const char *str)
{
	int cnt = 0;

	while(str[cnt])
		cnt++;
	return (cnt);
}

int check_b(const char *table[], int x, int y, int size)
{
	int tmpx, tmpy;
	int tmp;


	tmpx = 0;
	tmpy = 0;
	tmp = 1;
	while (tmp <= size)
	{
		if (y - tmp >= 0 && x - tmp >= 0 && table[y-tmp][x-tmp] == 'K')
			return (1);
		if (y - tmp >= 0 && x + tmp <= size && table[y-tmp][x+tmp] == 'K')
			return (1);
		if (y + tmp <= size && x - tmp >= 0 && table[y+tmp][x-tmp] == 'K')
			return (1);
		if (y + tmp <= size && x + tmp <= size && table[y+tmp][x+tmp] == 'K')
			return (1);
		tmp++;
	}
	return (0);
}

int check_r(const char *table[], int x, int y, int size)
{
	int tempx, tempy;

	tempy = 0;
	while (tempy < size)
	{
		if (table[tempy][x] == 'K')
			return (1);
		tempy++;
	}
	tempx = 0;
	while (tempx < size)
	{
		if (table[y][tempx] == 'K')
			return (1);
		tempx++;
	}
	return (0);
}

int check(const char *table[], int size)
{
	int x ,y;

	y = 0;
	while (table[y])
	{
		x = 0;
		while(table[y][x])
		{
			if (table[y][x] == 'P' && y > 0)
			{
			if ((x > 0 && table[y - 1][x - 1] == 'K') || (x + 1 <= size && table[y - 1][x + 1] == 'K'))
					return (1);
			}
			else if (table[y][x] == 'B')
			{
				if (check_b(table, x, y, size))
					return (1);
			}
			else if (table[y][x] == 'R')
			{
				if (check_r(table, x, y, size))
					return (1);
			}
			else if (table[y][x] == 'Q')
			{
				if (check_r(table, x, y, size) || check_b(table, x, y, size))
					return (1);
			}
			x++;
		}
		y++;
	}
	return (0);	
}

int main(int argc, const char *argv[])
{
	int size = argc - 1;
	
	if (size > 1)
	{
		if (check(argv, size))
			write(1, "Success", 7);
		else
			write(1, "Fail", 4);
	}
	write(1, "\n", 1);
	return (0);					
}
