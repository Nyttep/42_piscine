/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:10:22 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/02 10:30:06 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(char		a, char		b)
{
	if (a == 98 && b == 99)
	{
		ft_putchar(a / 10 + '0');
		ft_putchar(a % 10 + '0');
		ft_putchar(' ');
		ft_putchar(b / 10 + '0');
		ft_putchar(b % 10 + '0');
	}
	else
	{
		ft_putchar(a / 10 + '0');
		ft_putchar(a % 10 + '0');
		ft_putchar(' ');
		ft_putchar(b / 10 + '0');
		ft_putchar(b % 10 + '0');
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		while (b <= 99)
		{
			ft_display(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}

int main(void)
{
	ft_print_comb2();
}
