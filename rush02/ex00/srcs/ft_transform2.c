#include "ft.h"
#include "struct.h"

void	ft_puthundred(t_dict *tab, char *nbr, char *nbr_reste, int cycles_rest)
{
	char	*temp;
	char	*name;

	temp = ft_storechars(&nbr[0], 1);
	name = find_number_name(temp, tab);
	ft_putstr(name);
	ft_putstr(" ");
	name = find_number_name("100", tab);
	ft_putstr(name);
	if (!only_zero('0', nbr_reste) || cycles_rest > 0)
		ft_putstr(" ");
	ft_strfree(temp);
}

void	ft_putten(t_dict *tab, char *nbr, char *nbr_reste, int cycles_rest)
{
	char	*temp;
	char	*name;

	if (nbr[1] > '1')
	{
		temp = ft_storechars(&nbr[1], 2);
		temp[1] = '0';
		name = find_number_name(temp, tab);
		ft_putstr(name);
		if (!only_zero('0', nbr_reste) || cycles_rest > 0)
			ft_putstr(" ");
		ft_strfree(temp);
	}
	else if (nbr[1] == '1')
	{
		temp = ft_storechars(&nbr[1], 2);
		name = find_number_name(temp, tab);
		ft_putstr(name);
		if (cycles_rest > 0)
			ft_putstr(" ");
		ft_strfree(temp);
	}
}

void	ft_putunit(t_dict *tab, char *nbr, char *nbr_reste, int cycles_rest)
{
	char	*temp;
	char	*name;

	temp = ft_storechars(&nbr[2], 1);
	name = find_number_name(temp, tab);
	ft_putstr(name);
	if (!only_zero('0', nbr_reste) || cycles_rest > 0)
		ft_putstr(" ");
	ft_strfree(temp);
}

void	ft_process_paquet(
		t_dict *tab, char *nbr, char *nbr_reste, int cycles_rest
		)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if (i == 0 && nbr[i] > '0')
			ft_puthundred(tab, nbr, &nbr_reste[i + 1], cycles_rest);
		if (i == 1 && nbr[i] > '0')
		{	
			if (ft_strlen(nbr_reste) == 2)
				ft_putten(tab, nbr, &nbr_reste[i], cycles_rest);
			else
				ft_putten(tab, nbr, &nbr_reste[i + 1], cycles_rest);
		}
		if (i == 2 && nbr[i - 1] != '1' && nbr[i] > '0')
			ft_putunit(tab, nbr, &nbr_reste[i + 1], cycles_rest);
		i++;
	}
}

int	ft_cycles(int len_nbr)
{
	if (len_nbr % 3 != 0)
		return (len_nbr / 3 + 1);
	else
		return (len_nbr / 3);
}
