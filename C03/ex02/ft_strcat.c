/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:31:20 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/05 12:32:30 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char	*dest, char	*src)
{
	int	isrc;
	int	idest;

	isrc = 0;
	idest = 0;
	while (dest[idest])
		idest++;
	while (src[isrc])
	{
		dest[idest] = src[isrc];
		idest++;
		isrc++;
	}
	dest[idest] = 0;
	return (dest);
}
