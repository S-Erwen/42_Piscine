/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 20:33:51 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/25 20:40:12 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char **str, int size, char *sep)
{
	int i;
	int j;
	int taille;

	taille = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			j++;
			taille++;
		}
		i++;
	}
	i = 0;
	while (sep[i])
	{
		i++;
	}
	i *= (size - 1);
	return (taille + i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		y;
	int		s;
	char	*tab;
	int		j;

	j = 0;
	s = 0;
	i = 0;
	y = 0;
	if (!(tab = (malloc(sizeof(char) * ft_strlen(strs, size, sep) + 1))))
		return (NULL);
	while (i < size)
	{
		y = 0;
		while (strs[i][y])
			tab[j++] = strs[i][y++];
		if (i < (size - 1))
			while (sep[s])
				tab[j++] = sep[s++];
		s = 0;
		i++;
	}
	tab[j] = '\0';
	return (tab);
}
