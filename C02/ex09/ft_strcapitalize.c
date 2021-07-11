/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:41:42 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/05 11:43:11 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else if (str[i - 1] < 'a' || str[i - 1] > 'z')
				if (str[i - 1] > 'Z' || str[i - 1] < 'A')
					if (str[i - 1] > '9' || str[i - 1] < '0')
						str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
