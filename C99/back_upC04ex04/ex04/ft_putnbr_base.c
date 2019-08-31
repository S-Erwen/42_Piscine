/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_base.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/11 20:39:38 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/18 22:52:20 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		check_base(int y, char *check)
{
	char *temp;

	if (y <= 1 || y == '-' || base[y] == '+')
		return (0);
	y = 0;
	while (y < check[y])
	{
		if (ft_strcmp(check[y], check[y + 1]) > 0)
		{
			temp = check[y];
			check[y] = check[y + 1];
			check[y + 1] = temp;
			y = 0;
		}
		y++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int 	y;
	int		temp;

	i = 0;
	y = 0;
	while(base[y])
		y++;
	check_base(y, base[y]);
	if (nbr <= 9 && nbr >= 0)
		ft_putchar(nbr + '0');
	else if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	else if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
		ft_putnbr_base(nbr, base);
	}
	else if (nbr > 0)
	{
		while (nbr >= i)
		{
			temp = nbr % y;
			nbr = nbr / temp;
			i++;
			ft_putnbr_base(nbr, base);
		}
	}
	else
		ft_putchar(nbr);
}

int main()
{
	char truc[] = "01";
	ft_putnbr_base(42, truc);
	return 0;
}
