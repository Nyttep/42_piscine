#include "ft.h"
#include "struct.h"

void	ft_process_sep(t_dict *tab, int len, char *nbr_reste)
{
	char	*key;
	char	*name;

	key = ft_choose_sep(len);
	if (!key)
		return ;
	name = find_number_name(key, tab);
	if (name)
		ft_putstr(name);
	if (name && !only_zero('0', (nbr_reste + 1)))
		ft_putstr(" ");
}

char	*ft_fill_cut_nbr(char *cut_nbr)
{
	char	*dest;
	int		len;
	int		i;
	int		k;

	len = ft_strlen(cut_nbr);
	dest = malloc(sizeof(char) * 4);
	i = 0;
	k = 0;
	while (i < 3)
	{
		if (i < 3 - len)
			dest[i] = '0';
		else
		{	
			dest[i] = cut_nbr[k];
			k++;
		}
		i++;
	}
	dest[i] = '\0';
	ft_strfree(cut_nbr);
	return (dest);
}

void	ft_while(t_dict *tab, char *nbr, int i, int j)
{
	char	*cut_nbr;
	int		paquet;

	while (i < ft_cycles(ft_strlen(nbr)))
	{	
		if (i == 0 && (ft_strlen(nbr) % 3 != 0))
			paquet = ft_strlen(nbr) % 3;
		else
			paquet = 3;
		cut_nbr = ft_storechars(&nbr[j], paquet);
		if (ft_strlen(cut_nbr) < 3)
			cut_nbr = ft_fill_cut_nbr(cut_nbr);
		if (ft_strcmp(cut_nbr, "000") != 0)
		{
			ft_process_paquet(
				tab, cut_nbr, &nbr[j], ft_cycles(ft_strlen(nbr)) - i - 1);
			ft_process_sep(tab, ft_strlen(nbr) - j, &nbr[j]);
		}
		i++;
		j += paquet;
		ft_strfree(cut_nbr);
	}
}

void	ft_transform(t_dict *tab, char *nbr)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (ft_strcmp(nbr, "0") == 0)
	{
		ft_putstr(find_number_name("0", tab));
		return ;
	}
	ft_while(tab, nbr, i, j);
}
