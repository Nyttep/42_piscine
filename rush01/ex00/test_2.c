/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:13:29 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/11 18:09:56 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_easy(char tab[17])
{
	int	i;
	int	count1;
	int	count2;
	int	count3;
	int	count4;

	i = 0;
	count1 = 0;
	count2 = 0;
	count3 = 0;
	count4 = 0;
	while (i < 17)
	{
		if (tab[i] == 1 + '0')
			count1++;
		if (tab[i] == 2 + '0')
			count2++;
		if (tab[i] == 3 + '0')
			count3++;
		if (tab[i++] == 4 + '0')
			count4++;
	}
	if (count1 > 4 || count2 > 4 || count3 > 4 || count4 > 4)
		return (0);
	return (1);
}

int	ft_medium(char tab[17])
{
	int	i;
	int	j;
	int	offset;

	i = 0;
	j = 0;
	offset = 0;
	while (offset < 12)
	{
		while (i < offset + 4)
		{
			j = i + 1;
			while (j < offset + 4)
			{
				if (tab[i] == tab[j] && tab[i] != '0' && tab[j] != '0')
					return (0);
				j++;
			}
			i++;
		}
		offset += 4;
	}
	return (1);
}

int	ft_hard(char tab[17])
{
	int	i;
	int	j;
	int	offset;

	i = 0;
	j = 0;
	offset = 0;
	while (offset < 4)
	{
		i = 0 + offset;
		while (i < 13 + offset)
		{
			j = i + 4;
			while (j < 13 + i + offset)
			{
				if (tab[i] == tab[j] && tab[i] != '0' && tab[j] != '0')
					return (0);
				j += 4;
			}
			i += 4;
		}
		offset++;
	}
	return (1);
}
