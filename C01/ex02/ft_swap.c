/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:15:09 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/02 10:15:57 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int	*a, int		*b)
{
	int		temp;

	temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
