#include "ft.h"
#include "struct.h"

void	ft_strfree(char *str)
{
	if (str)
		free(str);
}

char	*find_number_name(char *nbr, t_dict *tab)
{
	int	j;

	j = 0;
	while (tab[j].name != 0)
	{
		if (ft_strcmp(nbr, tab[j].value) == 0)
			return (tab[j].name);
		j++;
	}
	return (0);
}

char	*ft_storechars(char *src, int n)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * (n + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_choose_sep2(int len)
{
	if (len < 31)
		return ("1000000000000000000000000000");
	else if (len < 34)
		return ("1000000000000000000000000000000");
	else if (len < 37)
		return ("1000000000000000000000000000000000");
	else if (len < 40)
		return ("1000000000000000000000000000000000000");
	else
		return (NULL);
}

char	*ft_choose_sep(int len)
{
	if (len < 4)
		return (NULL);
	else if (len < 7)
		return ("1000");
	else if (len < 10)
		return ("1000000");
	else if (len < 13)
		return ("1000000000");
	else if (len < 16)
		return ("1000000000000");
	else if (len < 19)
		return ("1000000000000000");
	else if (len < 22)
		return ("1000000000000000000");
	else if (len < 25)
		return ("1000000000000000000000");
	else if (len < 28)
		return ("1000000000000000000000000");
	else
		return (ft_choose_sep2(len));
}
