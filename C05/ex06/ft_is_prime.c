/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:12:29 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/08 18:13:04 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int	nb)
{
	int	div_max;
	int	i;
	int	x;

	i = 2;
	div_max = 1;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (0);
	while (div_max < nb / div_max)
		div_max++;
	while (i <= div_max && i != nb)
	{
		x = nb / i;
		if (x * i == nb)
			return (0);
		i++;
	}
	return (1);
}
