/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_next_prime2.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/18 05:19:14 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 02:26:04 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long int u;
	long int i;

	i = 2;
	u = nb;
	if (u < 2)
		return (0);
	while (i * i <= u)
	{
		if (u % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	if (nb < 0)
		nb = 0;
	if (ft_is_prime(nb) == 0)
		return (ft_find_next_prime(nb + 1));
	return (0);
}
