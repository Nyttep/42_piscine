/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 08:54:16 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/01 08:54:20 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	 lettre;

	lettre = 'z';
	while (lettre > 96)
	{
		write(1, &lettre, 1);
		lettre--;
	}
}
