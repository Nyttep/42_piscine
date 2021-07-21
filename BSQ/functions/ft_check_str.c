/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 18:20:44 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/20 20:40:47 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kayak.h"

int	is_valid_char(char n, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == n)
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_validity(char *str, char *charset, int line_count)
{
	int	i;

	i = ft_len_number(line_count);
	while (str[i])
	{
		if (is_valid_char(str[i], charset) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_str(char *str, int line_count)
{
	char	charset[5];
	int		i;
	int		j;

	j = 0;
	charset[3] = '\n';
	charset[4] = '\0';
	i = ft_len_number(line_count);
	if (ft_atoi_count(str, ft_len_number(line_count)) != line_count)
	{
		ft_putstr_error("Map error line count differs\n");
		return (-1);
	}
	while (j < 3)
	{
		charset[j] = str[i];
		j++;
		i++;
	}
	if (str[i] != '\n' || ft_check_validity(str, charset, line_count) == 0)
	{
		ft_putstr_error("Map error\n");
		return (-1);
	}
	return (0);
}
