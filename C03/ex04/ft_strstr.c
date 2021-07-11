/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:31:39 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/05 17:32:02 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char	*str, char	*to_find)
{
	int	i;
	int	n;
	int	len;

	n = 0;
	i = 0;
	len = ft_strlen(to_find);
	if (len == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0 + n])
			n++;
		else
			n = 0;
		i++;
		if (n == len)
		{
			return (str + i - len);
		}
	}
	return (0);
}
