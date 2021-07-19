/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 11:42:09 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/15 19:56:00 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char	**argv,	int	i)
{
	char	*temp;

	temp = &argv[i + 1][0];
	argv[i + 1] = &argv[i][0];
	argv[i] = temp;
}

void	ft_putstr_nl(char	**argv, int	i)
{
	int	j;

	j = 0;
	while (argv[i][j])
		write(1, &argv[i][j++], 1);
	write(1, "\n", 1);
}

int	main(int	argc, char	**argv)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (i < argc - 1)
	{
		while (argv[i][j] == argv[i + 1][j] && (argv[i][j] || argv[i + 1][j]))
			j++;
		if (argv[i][j] > argv[i + 1][j])
		{
			ft_swap(argv, i);
			i = 1;
		}
		else
			i++;
		j = 0;
	}
	i = 1;
	while (i < argc)
		ft_putstr_nl(argv, i++);
	return (0);
}
