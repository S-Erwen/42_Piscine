/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/20 18:27:56 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 22:44:55 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int 	i;
	int		size;

	i = 0;
	size = max - min;
	if (!(tab = (int *)malloc(sizeof(int) * size + 1))
			|| min >= max)
		return (NULL);
	while (max > min)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*tab = '\0';
	return (tab);
}
