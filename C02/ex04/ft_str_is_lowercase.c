/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:04:22 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/04 10:08:22 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 96)
			return (0);
		if (str[i] >= 123)
			return (0);
		i++;
	}
	return (1);
}