/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 21:44:16 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/18 21:30:35 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_len_atoi(char	*str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		j++;
		i++;
	}
	return (j);
}

char	*ft_atoi_str(char	*str)
{
	int		i;
	int		j;
	char	*dest;

	j = 0;
	i = 0;
	dest = malloc(sizeof(char) * (ft_len_atoi(str) + 1));
	if (dest == NULL)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		dest[j] = str[i];
		i++;
		j++;
	}
	dest[j] = 0;
	return (dest);
}

char	*ft_check_param3(char **argv)
{
	char	*ret;

	ret = ft_atoi_str(argv[2]);
	if (ret[0] == 0)
	{
		free (ret);
		ft_puterror("Error\n");
		return (NULL);
	}
	if (only_zero('0', argv[1]))
	{
		free(ret);
		return ("0");
	}
	free (ret);
	return (ft_atoi_str(argv[2]));
}

char	*ft_check_param2(char **argv)
{
	char	*ret;

	ret = ft_atoi_str(argv[1]);
	if (ret[0] == 0)
	{
		ft_puterror("Error\n");
		free(ret);
		return (NULL);
	}
	if (only_zero('0', argv[1]))
	{
		free(ret);
		return ("0");
	}
	free (ret);
	return (ft_atoi_str(argv[1]));
}

char	*ft_check_param(int argc, char **argv)
{
	if (argc == 1 || argc > 3)
	{
		ft_puterror("Error\n");
		return (NULL);
	}
	if (argc == 2)
		return (ft_check_param2(argv));
	else if (argc == 3)
		return (ft_check_param3(argv));
	else
		return (NULL);
}
