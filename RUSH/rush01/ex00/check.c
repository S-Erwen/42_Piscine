/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   check.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grde-fle <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 13:20:42 by grde-fle     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 15:52:50 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "rush-01.c"

int		ft_check_line(char *line, char value)
{
	int	y;

	y = 0;
	while (line[y])
	{
		if (line[y] == value)
			return (0);
		y++;
	}
	return (1);
}

int		ft_check_column(char **map, int y, char value)
{
	int	x;

	x = 1;
	while (x <= 4)
	{
		if (map[x][y] == value)
			return (0);
		x++;
	}
	return (1);
}

int		ft_check_main(char **map, int x, int y, char value)
{
	if (!ft_check_line(map[x], value)
	|| !ft_check_column(map, y, value)
	|| !ft_check_square(map, x, y, value))
		return (0);
	else
		return (1);
}

int		ft_check_number(char **tab, int x, int y)
{
	tab[x][y] = 0;
	if (tab[x][y] >= 0 || tab[x][y] <= 5)
		ft_putchar("Error");
}
