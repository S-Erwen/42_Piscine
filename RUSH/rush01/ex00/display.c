/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   display.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grde-fle <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 11:20:03 by grde-fle     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 13:48:50 by bxayasen    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_display(int **map)
{
	int x;
	int y;

	x = 0;
	while (x < 6)
	{
		y = 0;
		while (y < 6)
		{
			//map[x][y] = 0;
			ft_putchar(map[x][y] + 48);
			ft_putchar(' ');
			y++;
		}
		x++;
		ft_putchar('\n');
	}
}
