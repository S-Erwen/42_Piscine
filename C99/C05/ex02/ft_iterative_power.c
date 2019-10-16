/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/16 01:13:54 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/18 05:13:20 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int temp;

	temp = nb;
	i = nb;
	if (power > 0)
	{
		power--;
		while (power > 0)
		{
			temp = i;
			nb *= temp;
			power--;
		}
		return (nb);
	}
	if (power == 0)
		return (1);
	return (0);
}
