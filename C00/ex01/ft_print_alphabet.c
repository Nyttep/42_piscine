/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 08:53:51 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/01 08:53:55 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	lettre;

	lettre = 'a';
	while (lettre < 123 )
	{
		write(1, &lettre, 1);
		lettre++;
	}
}
