/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:08:01 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/07 13:35:26 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char	*str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	i;
	unsigned int	add_from_src;
	unsigned int	len_dest_start;

	len_dest_start = ft_strlen(dest);
	add_from_src = size - ft_strlen(dest) - 1;
	i = 0;
	if (size <= len_dest_start)
		return (size + ft_strlen(src));
	while (src[i] && add_from_src > 0)
	{
		dest[len_dest_start + i] = src[i];
		i++;
		add_from_src--;
	}
	if (size != 0 && len_dest_start <= size)
		dest[i] = 0;
	return (len_dest_start + ft_strlen(src));
}
