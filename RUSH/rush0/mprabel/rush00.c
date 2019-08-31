/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush00.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/06 19:47:59 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/07 12:06:02 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

int		check(int x, int y)
{
	if (x <= 0 || y <= 0)
		return (0);
	else
		return (1);
}

int		as(int largeur, int hauteur, int b)
{
	int largeur;
	int hauteur;
	int b;
}

void	rush(int x, int y, int largeur, int hauteur, int b)
{
	largeur = 1;
	hauteur = 1;
	b = check(x, y);
	while (hauteur <= y && b == 1)
	{
		while (largeur <= x)
		{
			if (largeur == 1 && (hauteur == 1 || hauteur == y))
				ft_putchar('o');
			else if (largeur == x && (hauteur == 1 || hauteur == y))
				ft_putchar('o');
			else if (largeur == x || largeur == 1)
				ft_putchar('|');
			else if (hauteur == y || hauteur == 1)
				ft_putchar('-');
			else
				ft_putchar(' ');
			largeur++;
		}
		hauteur++;
		ft_putchar('\n');
		largeur = 1;
	}
}
