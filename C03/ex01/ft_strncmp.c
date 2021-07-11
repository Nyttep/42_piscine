/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:06:37 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/06 11:06:43 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char	*s2, unsigned int	n)
{
	int	res;
	int	i;
	int	all1;
	int	all2;

	all1 = 0;
	all2 = 0;
	i = 0;
	res = 0;
	while (all1 == all2 && (s1[i] || s2[i]) && n > 0)
	{
		all1 = all1 + s1[i];
		all2 = all2 + s2[i];
		i++;
		n--;
	}
	res = all1 - all2;
	return (res);
}
