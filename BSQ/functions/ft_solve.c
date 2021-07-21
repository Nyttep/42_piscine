/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 12:07:51 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/21 12:27:17 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kayak.h"

int	ft_sum(int **tab, int i, int j)
{
	int	min;

	min = 2147483647;
	if (tab[i - 1][j - 1] < min)
		min = tab[i - 1][j - 1];
	if (tab[i][j - 1] < min)
		min = tab[i][j - 1];
	if (tab[i - 1][j] < min)
		min = tab[i - 1][j];
	return (min + 1);
}

t_answer ft_solve(int **tab, int line_count, int char_per_line)
{
	int			i;
	int			j;
	t_answer	solution;

	solution.value = 0;
	i = 1;
	j = 1;
	while (i < line_count)
	{
		j = 1;
		while (j < char_per_line)
		{
			if (tab[i][j] == 0)
				j++;
			else
			{
				tab[i][j] = ft_sum(tab, i, j);
				if (solution.value < tab[i][j])
				{
					solution.value = tab[i][j];
					solution.x = i;
					solution.y = j;
				}
			}
			j++;
		}
		i++;
	}
	return (solution);
}
