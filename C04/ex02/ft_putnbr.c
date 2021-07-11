/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:56:01 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/07 18:33:28 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nbr < 0 )
	{
		ft_putchar('-');
		nbr *= -1;
		ft_putnbr(nbr);
	}
	else if (nbr >= 0 && nbr <= 9 )
		ft_putchar(nbr + '0');
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}
