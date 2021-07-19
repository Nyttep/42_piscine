#include "struct.h"
#include "ft.h"

int	ft_strslen(char	**tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
		i++;
	return (i);
}

struct	s_dict	*ft_remove_negative_nbr(t_dict *tab_dict)
{
	int	i;

	i = 0;
	while (tab_dict[i].name != 0)
	{
		if (tab_dict[i].value[0] == '-')
			tab_dict[i].value = "42\0";
		i++;
	}
	return (tab_dict);
}

struct	s_dict	*ft_make_tab_struct(char	**tab)
{
	int		i;
	int		j;
	int		ac;
	t_dict	*tab_dict;

	ac = ft_strslen(tab);
	tab_dict = malloc(sizeof(t_dict) * (ac + 1));
	if (tab_dict == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ac)
	{
		tab_dict[i].len = ft_strlen_nbr(tab[i]);
		tab_dict[i].value = ft_only_nbr(tab[i], tab_dict[i].len);
		if (tab_dict[i].value == NULL)
			return (NULL);
		tab_dict[i].name = ft_only_value(tab[i]);
		if (tab_dict[i].name == NULL)
			return (NULL);
		i++;
	}
	tab_dict[i].name = 0;
	tab_dict = ft_remove_negative_nbr(tab_dict);
	return (tab_dict);
}
