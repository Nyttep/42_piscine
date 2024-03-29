/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 22:55:25 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/05 00:15:41 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*s1, char	*s2)
{
	int	res;
	int	i;
	int	all1;
	int	all2;

	all1 = 0;
	all2 = 0;
	i = 0;
	res = 0;
	while (all1 == all2 && (s1[i] || s2[i]))
	{
		all1 = all1 + s1[i];
		all2 = all2 + s2[i];
		i++;
	}
	res = all1 - all2;
	return (res);
}
