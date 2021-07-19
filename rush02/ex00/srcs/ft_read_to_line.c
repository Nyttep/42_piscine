/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 13:55:29 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/18 22:18:13 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**ft_create_tab(char argc, char **argv, int nb_c)
{
	char	**tab;
	char	*dest;
	int		fd;

	dest = malloc(sizeof(char) * (nb_c));
	if (!dest)
		return (NULL);
	if (argc == 2)
		fd = open("numbers.dict", O_RDONLY);
	else
		fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (NULL);
	read (fd, dest, nb_c);
	dest[nb_c - 1] = 0;
	tab = ft_split(dest, "\n");
	free(dest);
	close(fd);
	return (tab);
}

char	**ft_read_file(int argc, char **argv)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	char	**tab;
	int		nb_c;

	nb_c = 0;
	if (argc == 2)
		fd = open("numbers.dict", O_RDONLY);
	else
		fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (0);
	while (read (fd, buf, BUF_SIZE))
		nb_c += BUF_SIZE;
	close (fd);
	tab = ft_create_tab(argc, argv, nb_c);
	return (tab);
}
