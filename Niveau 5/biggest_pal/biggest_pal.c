#include "biggest_pal.h"

int ft_strlen(const char *str)
{
	int cnt = 0;

	while(str[cnt])
		cnt++;
	return (cnt);
}

int find_pal(const char *str, int cnt1)
{
	int tmp1, tmp2;
	int r_cnt = 0;
	int r_dist = 0;
	int str_len;
	int dist;

	str_len = ft_strlen(str);
	while (str[cnt1])
	{	
		dist = 1;
		while (cnt1 + dist < str_len)
		{
			if (str[cnt1] == str[cnt1 + dist])
			{
				tmp1 = cnt1;
				tmp2 = cnt1 + dist;
				while(tmp2 - tmp1 > 2 && str[tmp1] == str[tmp2])
				{
					tmp1++;
					tmp2--;
				}
				if (tmp2 - tmp1 <= 2 && dist > r_dist)
				{
					r_cnt = cnt1;
					r_dist = dist + 1;
				}
			}
			dist++;
		}
		cnt1++;
	}
	write(1, &str[r_cnt], r_dist);
	return (0);
}

int main (int argc, const char *argv[])
{
	if (argc == 2)
		find_pal(argv[1], 0);
	write(1, "\n", 1);
}
