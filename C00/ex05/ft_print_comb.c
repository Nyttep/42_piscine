/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 10:04:50 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/01 12:02:55 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void);

void	ft_putchar(char c);

void	ft_print(char	ltr0, char	ltr1, char	ltr2);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char	ltr0, char	ltr1, char	ltr2)
{
	ft_putchar(ltr0);
	ft_putchar(ltr1);
	ft_putchar(ltr2);
	if (ltr0 != '7' || ltr1 != '8' || ltr2 != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	ltr0;
	char	ltr1;
	char	ltr2;

	ltr0 = '0';
	ltr1 = '1';
	ltr2 = '2';
	while (ltr0 < '8')
	{
		ltr1 = ltr0 + 1;
		while (ltr1 < '9')
		{
			ltr2 = ltr1 + 1;
			while (ltr2 <= '9')
			{
				ft_print(ltr0, ltr1, ltr2);
				ltr2++;
			}
			ltr1++;
		}
		ltr0++;
	}
}
