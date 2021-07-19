/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 09:02:49 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/14 11:47:52 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int	**range, int	min, int	max)
{
	int	i;
	int	inter;

	i = -1;
	inter = max - min;
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	range[0] = malloc(sizeof(int) * inter);
	if (range[0] == NULL)
		return (-1);
	while (min < max)
		range[0][++i] = min++;
	return (inter);
}
