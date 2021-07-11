/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:08:59 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/05 14:10:11 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char	*dest, char	*src, unsigned int	nb)
{
	int	isrc;
	int	idest;

	isrc = 0;
	idest = 0;
	while (dest[idest])
		idest++;
	while (src[isrc] && nb > 0)
	{
		dest[idest] = src[isrc];
		isrc++;
		idest++;
		nb--;
	}
	dest[idest] = 0;
	return (dest);
}
