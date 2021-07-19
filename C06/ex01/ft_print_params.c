/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 19:51:29 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/08 21:50:53 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int	argc, char	**argv)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (i < argc)
	{
		while (argv[i][j])
			write(1, &argv[i][j++], 1);
		j = 0;
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
