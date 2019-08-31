/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush03.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/06 12:54:07 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/06 21:16:20 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int largeur;
	int	hauteur;

	largeur = 1;
	hauteur = 1;
	while (hauteur <= y)
	{
		while (largeur <= x)
		{
			if (largeur == 1 && (hauteur == 1 || hauteur == y))
				ft_putchar('A');
			else if (largeur == x && (hauteur == 1 || hauteur == y))
				ft_putchar('C');
			else if (hauteur == 1 || largeur == 1
					|| largeur == x || hauteur == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			largeur++;
		}
		hauteur++;
		ft_putchar('\n');
		largeur = 1;
	}
}
