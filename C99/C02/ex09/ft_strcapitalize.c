/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/14 19:08:49 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 20:04:54 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	cap_min(int i, char *str)
{
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	cap_min(i, str);
	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9')))
		{
			if (str[0] >= 'a' && str[0] <= 'z')
				str[0] -= 32;
			if (str[++i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else
			i++;
	}
	return (str);
}
