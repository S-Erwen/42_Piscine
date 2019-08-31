/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 20:33:51 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 21:37:04 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

char 	ft_putstr(char *str)
{
	int i = 0;

	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (*str);
}

#include <stdlib.h>

int		ft_strslen(char **str)
{
	int i = 0;
	int y = 0;
	ft_putstr("Not Error 0\n");

	while(str[i])
	{
		y++;
		if (str[i][y] == '\0' || str[i][y] == '\n')
		{
			i++;
			y = 0;
		}
	}
	ft_putstr("Not Error 0");
	return (i);
}

int		ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char 	*tab;
	int		z;
	int 	i;
	int		y;
	int		u;

	size = ft_strslen(strs);
	size += ft_strlen(sep);
	u = 0;
	z = 0;
	y = 0;
	i = -1;
	if (!(tab = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	if (size == 0)
		return (*strs);
	while (strs[i][y])
	{
		i++;
		if (strs[i][y] == '\0')
		{
			while (sep[u])
				tab[z++] = sep[u++];
		}
		u = 0;
			while (strs[y])
				tab[z++] = strs[i][y++];
	}
	tab = '\0';
	return (tab);
}

#include <stdio.h>

int main()
{
	char *str[3];
	str[0] = "Testeur";
	str[1] = "de";
	str[2] = "programme";
	char test[] = " ,";
	printf("%s", ft_strjoin(50, str, test));
}
