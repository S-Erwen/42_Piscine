/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush00.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/06 19:47:59 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/06 20:12:34 by esidelar    ###    #+. /#+    ###.fr     */
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
