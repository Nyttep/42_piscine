/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:03:59 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/21 12:41:34 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kayak.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char				*str;
	t_answer			solution;
	char				**tab_split;
	int					**tab_int;
	unsigned int		letter_count;
	unsigned int		line_count;

	(void)argc;
	line_count = ft_line_count_open(argv[1], &letter_count);
	str = ft_read_in_str(letter_count, argv[1]);
	tab_split = ft_split(str, "\n");
	tab_int = ft_init_tab(tab_split, line_count - 1, ft_strlen(tab_split[1]));
	solution = ft_solve(tab_int, line_count - 1, ft_strlen(tab_split[1]));
	ft_put_answer(tab_split, solution, line_count - 1);
	int i = 0;
	while (tab_split[i])
	{
		printf("%s\n", tab_split[i]);
		i++;
	}
	return (0);
}
