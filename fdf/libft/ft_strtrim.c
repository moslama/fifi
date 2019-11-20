#include "libft.h"

char		*ft_strtrim(char const *str)
{
	char	*new;
	int		len;
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	if (str == NULL)
		return (NULL);
	len = ft_strlen((char *)str);
	while (str[len - 1] == ' ' || str[len - 1] == '\n' || str[len - 1] == '\t')
		len--;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
	{
		len--;
		i++;
	}
	if (len <= 0)
		len = 0;
	if (!(new = (char *)malloc(len * sizeof(*new) + 1)))
		return (NULL);
	while (len-- != 0)
		new[i2++] = str[i++];
	new[i2] = '\0';
	return (new);
}
