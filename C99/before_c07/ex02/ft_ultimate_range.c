/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_range.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 04:00:52 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 22:53:15 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int size;
	int i;

	i = 0;
	size = max - min;
	if (!(tab = (int *)malloc(sizeof(int) * size + 1)))
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (max > min)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*tab = '\0';
	*range = tab;
	return (i);
}
