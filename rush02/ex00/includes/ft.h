/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 13:52:12 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/18 21:54:14 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include "struct.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# define BUF_SIZE 2048

char			**ft_read_file(int argc, char **argv);
void			ft_putstrn(char *str, int n);
void			ft_puterror(char *str);
char			*ft_strjoin(int size, char **strs, char *sep);
int				ft_strlen(char *str);
char			**ft_split(char *str, char *charset);
struct	s_dict	*ft_make_tab_struct(char **tab);
void			ft_puterror(char *str);
char			*ft_check_param(int argc, char **argv);
void			ft_transform(t_dict *tab, char *nbr);
int				ft_strcmp(char *s1, char *s2);
void			ft_putstr(char *str);
void			ft_free_struct(t_dict *tab);
void			ft_putchar(char c);
char			*find_number_name(char *nbr, t_dict *tab);
char			*find_decade_name(char *nbr, t_dict *tab);
char			*ft_storechars(char *src, int n);
void			ft_puthundred(
					t_dict *tab, char *nbr, char *nbr_reste, int cycles_rest);
void			ft_putten(
					t_dict *tab, char *nbr, char *nbr_reste, int cycles_rest);
void			ft_putunit(
					t_dict *tab, char *nbr, char *nbr_reste, int cycles_rest);
void			ft_process_paquet(
					t_dict *tab, char *nbr, char *nbr_reste, int cycles_rest);
int				ft_cycles(int len_nbr);
int				only_zero(char c, char *str);
char			*ft_choose_sep2(int len);
char			*ft_choose_sep(int len);
int				only_zero(char c, char *str);
void			ft_free_tab2d(char **tab);
void			ft_strfree(char *str);
int				ft_strlen_nbr(char	*str);
char			*ft_only_nbr(char	*tab, int	len);
char			*ft_only_value(char	*tab);

#endif
