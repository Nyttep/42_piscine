/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_answer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 10:23:51 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/21 12:37:17 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kayak.h"

void	ft_put_answer(char **strs, t_answer ans, int nbr_line)
{
	int	i;
	int	j;
	int	len_nbr;

	len_nbr = ft_len_number(nbr_line);
	i = 0;
	while (i < ans.value)
	{
		j = 0;
		while (j < ans.value)
		{
			strs[ans.x - i][ans.y - j] = strs[0][len_nbr + 2];
			j++;
		}
		i++;
	}
}
