/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:13:29 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/08 18:14:01 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int	nb)
{
	int	div_max;
	int	i;

	i = 2;
	div_max = 1;
	if (nb <= 2)
		return (2);
	while (div_max < nb / div_max)
		div_max++;
	while (i <= div_max)
	{
		if (nb % i == 0)
			nb = ft_find_next_prime(nb + 1);
		i++;
	}
	return (nb);
}
