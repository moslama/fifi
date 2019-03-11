
int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char		tmp;

	if (str)
	{
		i = 0;
		len = ft_strlen(str);
		while (i <= len / 2)
		{
			tmp = str[i];
			str[i] = str[len - i - 1];
			str[len - i - 1] = tmp;
			i++;
		}
	}
	return (str);
}

