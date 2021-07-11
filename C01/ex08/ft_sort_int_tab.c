/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:34:30 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/03 15:40:42 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	c = c + 48;
	write(1, &c, 1);
}

void	ft_sort_int_tab(int	*tab, int	size)
{
	int	temp;
	int	x;
	int	i;

	size--;
	i = 0;
	x = 0;
	temp = 0;
	while (i < size)
	{
		while (x < size)
		{
			if (tab[x] > tab[x + 1])
			{
				temp = tab[x + 1];
				tab[x + 1] = tab[x];
				tab[x] = temp;
			}
			x++;
		}
		x = 0;
		i++;
	}
}
