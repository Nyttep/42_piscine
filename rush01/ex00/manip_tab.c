/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manip_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:10:22 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/11 18:06:42 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_spsubject(char *subject, char	spsubject[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			spsubject[i][j] = subject[i * 4 + j];
			j++;
		}
		i++;
	}
}

char	*ft_jnsubject(char spsubject[4][4], char *jnsubject)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			jnsubject[i * 4 + j] = spsubject[i][j];
			j++;
		}
		i++;
	}
	jnsubject[16] = '\0';
	return (jnsubject);
}

int	ft_getsubject(char *input, char *output)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!input || ft_strlen(input) != 31)
		return (0);
	while (i < 31 && input[i])
	{
		if (input[i] >= '1' && input[i] <= '4')
			output[j] = input[i];
		else
			return (0);
		if (i < 30 && input[i + 1] != ' ')
			return (0);
		i += 2;
		j++;
	}
	output[16] = '\0';
	return (1);
}

void	ft_init(char tab[17])
{
	int	i;

	i = 0;
	while (i < 16)
	{
		tab[i++] = '0';
	}
	tab[16] = '\0';
}
