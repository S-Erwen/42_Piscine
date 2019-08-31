/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/07 05:14:01 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 20:31:37 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				y;

	i = 0;
	y = 0;
	while (i < n)
	{
		if (y == 0)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		if (dest[i] == '\0')
			y = 1;
		i++;
	}
	return (dest);
}
