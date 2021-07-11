/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:11:23 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/08 18:12:06 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int	nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i < nb / i)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
