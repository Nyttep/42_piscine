/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 17:35:11 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/13 17:36:04 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i + 1);
}

char	*ft_strdup(char	*src)
{
	char	*dest;
	int		i;

	i = -1;
	dest = malloc(sizeof(char) * ft_strlen(src));
	while (src[++i])
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}
