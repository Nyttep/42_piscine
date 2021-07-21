/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_in_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:57:44 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/20 19:38:47 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kayak.h"

char	*ft_read_in_str(int letter_count, char *file_name)
{
	int		fd;
	int		i;
	char	*str;
	int		ret;
	char	c;

	str = malloc((letter_count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[letter_count] = '\0';
	fd = open(file_name, O_RDONLY);
	ret = read(fd, &c, 1);
	str[0] = c;
	i = 1;
	while (ret != 0)
	{
		ret = read(fd, &c, 1);
		if (ret != 0)
		{
			str[i] = c;
			i++;
		}
	}
	close(fd);
	return (str);
}

int	ft_line_count_open(char *file, unsigned int *letter_count)
{
	int	fd;
	int	line_count;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_error("File openning Error\n");
		return (-1);
	}
	line_count = ft_line_count(fd, letter_count);
	close(fd);
	if (line_count == 0)
		ft_putstr_error("Error, empty file\n");
	return (line_count);
}

int	ft_line_count(int fd, unsigned int *letter_count)
{
	char	buf;
	char	c;
	int		ret;
	int		line_count;

	line_count = 0;
	buf = '\n';
	ret = read(fd, &c, 1);
	while (ret != 0)
	{
		if (c == '\n' && buf != '\n')
			line_count++;
		buf = c;
		ret = read(fd, &c, 1);
		*letter_count = *letter_count + 1;
	}
	return (line_count);
}
