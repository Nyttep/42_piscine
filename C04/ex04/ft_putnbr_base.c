/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 11:52:32 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/07 22:33:35 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	same_char_twice(char	*base)
{
	int	i;
	int	n;
	int	p;

	i = 0;
	n = 0;
	p = 0;
	while (base[i])
	{
		while (base[n])
		{
			if (base[i] == base[n])
			{
				p++;
				if (p == 2)
					return (1);
			}
			n++;
		}
		p = 0;
		i++;
	}
	return (0);
}

int	ft_error(char	*base)
{
	int	i;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || (base[i] >= 9 && base[i] <= 13))
			return (1);
		i++;
	}
	i = 0;
	if (same_char_twice(base))
		return (1);
	return (0);
}

void	ft_putnbr_base(int	nbr, char	*base)
{
	int	len_base;

	len_base = ft_strlen(base);
	if (ft_error(base))
		return ;
	else if (nbr == -2147483648)
	{
		ft_putnbr_base(-2, base);
		ft_putnbr_base(147483648, base);
	}
	else if (nbr < 0 )
	{
		ft_putchar('-');
		nbr *= -1;
		ft_putnbr_base(nbr, base);
	}
	else if (nbr >= 0 && nbr < len_base)
		ft_putchar(base[nbr]);
	else
	{
		ft_putnbr_base(nbr / len_base, base);
		ft_putnbr_base(nbr % len_base, base);
	}
}
