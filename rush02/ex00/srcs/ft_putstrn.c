/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:32:21 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/17 14:34:53 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstrn(char *str, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write (1, &str[i], 1);
		i++;
	}
}
