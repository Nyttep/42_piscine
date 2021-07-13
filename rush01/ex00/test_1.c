/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:12:47 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/11 18:09:39 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isdone(char *tab);

int	ft_test_row(char	tab[16], int	i, int	sens)
{
	char	view;
	char	hauteur;
	int		init;

	init = i;
	hauteur = '0';
	view = '0';
	while (i <= init + 12 && i >= init - 12)
	{
		if (tab [i] == '4')
		{
			view++;
			return (view);
		}
		else if (tab[i] > hauteur)
		{
			hauteur = tab[i];
			view++;
		}
		i += sens;
	}
	return (view);
}

int	ft_test_col(char	tab[16], char	i, int	sens)
{
	char	view;
	char	hauteur;
	int		init;

	init = i;
	hauteur = '0';
	view = '0';
	while (i < init + 4 && i > init - 4)
	{
		if (tab [(int)i] == '4')
		{
			view++;
			return (view);
		}
		else if (tab[(int)i] > hauteur)
		{
			hauteur = tab[(int)i];
			view++;
		}
		i += sens;
	}
	return (view);
}

int	ft_test_col_and_row(char	tab[16], char	arg[4][4], int	i, int	j)
{
	if (i == 0)
	{
		if (ft_test_col(tab, j * 4, 1) != arg[i][j])
		{
			return (1);
		}
	}
	else if (i == 1)
	{
		if (ft_test_col(tab, j * 4 + 3, -1) != arg[i][j])
			return (1);
	}
	else if (i == 2)
	{
		if (ft_test_row(tab, j, 4) != arg[i][j])
			return (1);
	}
	else if (i == 3)
	{
		if (ft_test_row(tab, j + 12, -4 ) != arg[i][j])
			return (1);
	}
	return (0);
}

int	ft_test(char	tab[16], char	arg[4][4])
{
	int	i;
	int	j;

	i = 0;
	if (ft_isdone(tab) > 0)
		return (1);
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (ft_test_col_and_row(tab, arg, i, j))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
