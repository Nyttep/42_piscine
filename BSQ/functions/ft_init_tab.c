/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 18:45:40 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/21 11:11:42 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "kayak.h"

void	ft_place_nbr(int **tab, int char_per_line, char	**strs, int	nbr_line)
{
	int	i;
	int	j;
	int	len_nbr;

	len_nbr = ft_len_number(nbr_line);
	i = 0;
	while (i < nbr_line)
	{
		j = 0;
		while (j < char_per_line)
		{
			if (strs[i + 1][j] == strs[0][len_nbr])
				tab[i][j] = 1;
			else if (strs[i + 1][j] == strs[0][len_nbr + 1])
				tab[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	**ft_init_tab(char	**strs, int	nbr_line, int	char_per_line)
{
	int	**tab;
	int	i;
	int	j;

	j = 0;
	i = 0;
	tab = malloc(sizeof(int *) * nbr_line);
	if (tab == NULL)
	{
		ft_putstr_error("Failed malloc\n");
		exit(EXIT_FAILURE);
	}
	while (i < nbr_line)
	{
		tab[i] = malloc(sizeof(int) * char_per_line);
		if (tab[i] == NULL)
		{
			ft_putstr_error("Failed malloc\n");
			exit(EXIT_FAILURE);
		}
		i++;
	}
	ft_place_nbr(tab, char_per_line, strs, nbr_line);
	return (tab);
}
