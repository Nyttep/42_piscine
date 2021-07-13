/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:17:29 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/11 18:17:45 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_init(char tab[17]);
int		ft_getsubject(char *input, char *output);
char	*ft_solve(char *tab, char arg[4][4], int pos, char (*solution)[17]);
int		ft_isdone(char *tab);
void	ft_display(char *tab);
void	ft_putstr(char *str);
void	ft_spsubject(char *subject, char	spsubject[4][4]);

int	main(int argc, char *argv[])
{
	char	subject[17];
	char	solution[17];
	char	find[17];
	char	spsubject[4][4];

	ft_init(solution);
	ft_init(find);
	if (argc != 2 || ft_getsubject(argv[1], subject) != 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_spsubject(subject, spsubject);
	ft_solve(find, spsubject, 0, &solution);
	if (ft_isdone(solution) == -1)
		ft_display(solution);
	else
		ft_putstr("Error\n");
	return (0);
}
