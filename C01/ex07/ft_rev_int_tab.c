/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 22:37:18 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/03 10:37:14 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int	*tab, int	size)
{
	int	temp;
	int	x;

	size--;
	x = 0;
	temp = 0;
	while (size > x)
	{
		temp = tab[size];
		tab[size] = tab[x];
		tab[x] = temp;
		size--;
		x++;
	}
}
