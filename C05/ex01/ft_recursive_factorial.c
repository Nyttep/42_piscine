/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:05:21 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/08 18:06:21 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb >= 1)
		 return (nb * ft_recursive_factorial(nb - 1));
	return (1);
}
