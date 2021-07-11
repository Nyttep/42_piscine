/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:32:20 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/04 16:38:12 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char	*dest, char*src, unsigned	int	n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
