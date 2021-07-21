/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kayak.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:29:38 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/21 12:29:20 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAYAK_H
# define KAYAK_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_answer
{
	int	x;
	int	y;
	int	value;
}	t_answer;

char		**ft_split(char *str, char *charset);
char		*ft_read_in_str(int letter_count, char *file_name);
int			ft_line_count(int fd, unsigned int *letter_count);
int			ft_line_count_open(char *file, unsigned int *letter_count);
int			ft_check_str(char *str, int line_count);
int			ft_check_tab_split(char **tab_split);
int			**ft_init_tab(char **strs, int nbr_line, int char_per_line);
void		ft_put_answer(char **strs, t_answer ans, int nbr_line);
t_answer	ft_solve(int **tab, int line_count, int char_per_line);

void	ft_putstr_error(char *str);
void	ft_putstr(char	*str);
void	ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_atoi_count(char *str, int count);
int		ft_len_number(int nbr);
#endif 
