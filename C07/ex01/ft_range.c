/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 17:37:07 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/14 17:05:22 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int	min, int	max)
{
	int	i;
	int	*range;
	int	tmp_min;
	int	inter;

	inter = max - min;
	tmp_min = min;
	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (range);
	}
	range = malloc(sizeof(int) * (inter));
	if (range == NULL)
		return (0);
	i = 0;
	while (tmp_min < max)
		range[i++] = tmp_min++;
	return (range);
}
