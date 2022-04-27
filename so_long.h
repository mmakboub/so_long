/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 03:49:31 by mmakboub          #+#    #+#             */
/*   Updated: 2022/04/26 07:29:43 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SOLONG_H
# define SOLONG_H
# include <stdio.h>
# include <mlx.h>
# include <fcntl.h>
# include "./get_next_line/get_next_line.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_compstjeu{
	char **map;
	int  joueur;
	int  collectbls;
	int	 mur;
	int	 base_du_sol;
	int  exit;
	int  mapsline;
	void *mlx;
	void *win;
	void *img;
	int abscisse;
	int ordonnee;

}t_compstjeu;

void 	ft_initializingvariabls(t_compstjeu *jeu);
int		ft_check_lines_extremity(t_compstjeu *jeu);
int		ft_check_map_form(t_compstjeu *jeu);
int		ft_strlen(const char *str);
int		ft_checkfirst_lastline(t_compstjeu	*jeu);
void	ft_reading_intern_map(t_compstjeu *jeu);
int 	ft_check_maps_content(t_compstjeu	*jeu);
void	ft_check_ber(char *filename);
int		ft_compteur_de_ligne(char *fichier);
int		ft_readline_maps(t_compstjeu *jeu, char	*fichier);
void	ft_putstr(char *s);
#endif
