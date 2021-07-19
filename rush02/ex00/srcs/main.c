/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 16:50:52 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/18 22:15:33 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "ft.h"

int	main(int argc, char **argv)
{
	char	*ret;
	char	**tab;
	t_dict	*new_tab;

	ret = ft_check_param(argc, argv);
	if (ret == NULL)
		return (0);
	tab = ft_read_file(argc, argv);
	new_tab = ft_make_tab_struct(tab);
	ft_free_tab2d(tab);
	ft_transform(new_tab, ret);
	ft_putchar('\n');
	if (only_zero('0', ret) == 0)
		free(ret);
	ft_free_struct(new_tab);
	return (0);
}
