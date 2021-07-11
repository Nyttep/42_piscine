/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 09:45:02 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/09 12:39:28 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 0 && str[i] <= 64)
			return (0);
		if (str[i] >= 91 && str[i] <= 96)
			return (0);
		if (str[i] >= 123)
			return (0);
		i++;
	}
	return (1);
}