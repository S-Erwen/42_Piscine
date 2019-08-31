/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_search.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 16:35:18 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 17:18:21 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "numbers.dict"
#include "need.h"

int ft_search(char *gv)
{
	int open(char *numbers.dict, char *src);
	int i;
	int y;

	y = 0;
	i = 0;
	while (gv[i++] || gv[i] == ':')
		if (!(gv[i] >= '0' && gv[i] <= '9'))
			return ("error");
	ft_atoi(gv);
	while (src[y] != '\n')
	{
		ft_putchar(src[y]);
		y++;
	}
	return (gv);
}
