/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bxayasen <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 22:58:47 by bxayasen     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 12:11:02 by bxayasen    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int ezFill(int **map);
void ft_display(int **map);
int iniTab(int **tab, char *str);

int		rush(char *str)
{
	int **map;
	int x;

	x = 0;
	map = malloc(sizeof(int*) * 6);
	while (x < 6)
	{
		map[x] = malloc(sizeof(int) * 6);
		x++;
	}
	iniTab(map, str);
	ezFill(map);
	ft_display(map);
	return (0);	
}
