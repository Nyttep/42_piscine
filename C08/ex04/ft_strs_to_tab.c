/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 10:37:32 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/19 09:22:06 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char	*str)
{
	int		i;
	char	*dup;

	dup = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (dup == NULL)
		return (0);
	i = -1;
	while (str[++i])
		dup[i] = str[i];
	dup[i] = 0;
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int	ac, char	**av)
{
	int			i;
	t_stock_str	*tab;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (ft_strdup(av[i]) == 0)
			return (NULL);
	}
	tab[i].str = 0;
	return (tab);
}
