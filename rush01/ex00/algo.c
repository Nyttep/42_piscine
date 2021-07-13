/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:14:40 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/11 18:10:54 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_test(char	tab[16], char	arg[4][4]);
int	ft_easy(char tab[17]);
int	ft_medium(char tab[17]);
int	ft_hard(char tab[17]);

int	ft_isdone(char *tab)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (tab[i] == '0')
			return (i);
		i++;
	}
	return (-1);
}

void	ft_copy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		dest[i] = src[i];
		i++;
	}
}

char	*ft_solve(char *tab, char arg[4][4], int pos, char (*solution)[17])
{
	int	i;

	i = 1;
	if (pos == 16)
	{
		ft_copy(tab, *solution);
		return (tab);
	}
	while (i <= 4)
	{
		tab[pos] = '0' + i;
		if (ft_easy(tab) && ft_medium(tab) && ft_hard(tab)
			&& ft_test(tab, arg))
		{
			ft_solve(tab, arg, pos + 1, solution);
		}
		i++;
	}
	tab[pos] = '0';
	return (tab);
}
