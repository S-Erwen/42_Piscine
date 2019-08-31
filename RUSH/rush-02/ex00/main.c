/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/20 13:48:08 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 17:18:19 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./src/need.h"
#include "./src/ft_search.h"

int main(int argc, char **argv)
{
	argc -= 1;
	argv += 1;
	if (argc != 2 || argc != 1)
	{
		ft_putchar("Error");
		ft_putchar('\n');
	}
	if (argc == 1)
	{
		ft_search(argv);
	}
	if (argc == 2)
		int open(char *numbers.dict, int src);
	return (0);
}
