#include "ft.h"
#include "struct.h"

int	ft_strlen_nbr(char	*str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		j++;
		i++;
	}
	return (j);
}

char	*ft_only_nbr(char	*tab, int	len)
{
	int		i;
	int		j;
	char	*nbr;

	nbr = malloc(sizeof(char) * (len + 1));
	if (nbr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while ((tab[i] >= 9 && tab[i] <= 13) || tab[i] == ' ')
		i++;
	if (tab[i] == '+')
		i++;
	while (j < len)
	{
		nbr[j] = tab[i];
		i++;
		j++;
	}
	nbr[j] = '\0';
	return (nbr);
}

int	ft_parssing(char	*tab, int	i)
{
	while ((tab[i] >= 9 && tab[i] <= 13) || tab[i] == ' ')
		i++;
	if (tab[i] == '+' || tab[i] == '-')
		i++;
	while (tab[i] >= '0' && tab[i] <= '9')
		i++;
	while (tab[i] == ' ')
		i++;
	if (tab[i] == ':' && tab[i])
		i++;
	while (tab[i] == ' ' && tab[i])
		i++;
	return (i);
}

int	ft_strlen_value(char	*tab)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	i = ft_parssing(tab, i);
	while (tab[i] >= 32 && tab[i] <= 126 && tab[i])
	{
		i++;
		j++;
	}
	return (j);
}

char	*ft_only_value(char	*tab)
{
	int		i;
	int		j;
	char	*value;

	j = 0;
	i = 0;
	value = malloc(sizeof(char) * (ft_strlen_value(tab) + 1));
	if (value == NULL)
		return (NULL);
	i = ft_parssing(tab, i);
	while (tab[i] >= 32 && tab[i] <= 126 && tab[i])
	{
		value[j] = tab[i];
		i++;
		j++;
	}
	value[j] = 0;
	return (value);
}
