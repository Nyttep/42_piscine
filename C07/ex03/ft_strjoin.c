/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:10:53 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/14 18:03:07 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strslen(char	**str, int	size)
{
	int	i;
	int	j;
	int	tot;

	tot = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j++])
			tot++;
		i++;
	}
	return (tot * 10);
}

void	ft_strcat(char	*joined, char	**strs, char	*sep, int	size)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	j = -1;
	k = -1;
	while (++i < size)
	{
		while (strs[i][++j])
			joined[++k] = strs[i][j];
		j = -1;
		if (i < size - 1)
		{
			while (sep[++j])
				joined[++k] = sep[j];
			j = -1;
		}
	}
	joined[++k] = 0;
}

char	*ft_strjoin(int	size, char	**strs, char	*sep)
{
	char	*joined;

	joined = malloc(1 * (ft_strslen(strs, size) + (size - 1) * ft_strlen(sep)));
	if (size == 0)
		return (joined = malloc(sizeof(char)));
	if (joined == NULL)
		return (0);
	ft_strcat(joined, strs, sep, size);
	return (joined);
}
