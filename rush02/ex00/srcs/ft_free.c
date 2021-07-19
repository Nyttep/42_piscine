/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 16:48:51 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/18 21:30:09 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "struct.h"

void	ft_free_struct(t_dict *tab)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (tab[i].name != 0)
	{
		free(tab[i].value);
		free(tab[i].name);
		i++;
	}
	free(tab);
}

void	ft_free_tab2d(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
