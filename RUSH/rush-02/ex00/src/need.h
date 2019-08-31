/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   need.h                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/20 14:16:55 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 17:20:01 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int c;
	int count;

	i = 0;
	c = 0;
	count = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		return ("error");
	if (str[i] == '+' || str[i] == '-')
		return ("error");
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return ("error");
		c = c * 10;
		c = c + str[i++] - 48;
	}
	if (count % 2 == 0)
		return (c);
	else
		return ("error");
}
