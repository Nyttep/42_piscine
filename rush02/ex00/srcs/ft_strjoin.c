/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 21:56:12 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/17 14:22:10 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_catjoin(int size, char **strs, char *sep, char *dest)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	k = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
		{
			dest[k++] = strs[i][j];
		}
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
			{
				dest[k++] = sep[j];
				j++;
			}
		}
	}
	dest[k] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*dest;

	i = 0;
	len = 0;
	if (size <= 0)
		return (malloc(sizeof(char)));
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += ft_strlen(sep);
		i++;
	}
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_catjoin(size, strs, sep, dest);
	return (dest);
}
