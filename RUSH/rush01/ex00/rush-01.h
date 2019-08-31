/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush-01.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grde-fle <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 08:05:20 by grde-fle     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/13 13:40:51 by grde-fle    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef	RUSH-01_H
# define RUSH-01_H

//Librairies pour write malloc et free
# include <unistd.h>
# include <stdlib.h>

//fonctions de check
int		ft_check_line(char *line, value);
int 	ft_check_column(char **map, int y, char value);
int		ft_check_square(char **map, int x, int y, char value);
int		ft_check_main(char **map, int x, int y, char value);
//fonctions pour la recursivite
//fonction d'affichage


// fonction utilitaires
void	ft_putstr(char *str);
void	ft_putchar(char c);


#endif
