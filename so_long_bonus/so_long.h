/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 03:49:31 by mmakboub          #+#    #+#             */
/*   Updated: 2022/05/19 22:20:07 by mmakboub         ###   ########.fr       */
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
	void *joueur_img;
	void *collectbls_img;
	void *mur_img;
	void *base_du_sol_img;
	void *exit_img;
	int  mapsline;
	void *mlx;
	void *win;
	void *img;
	int abscisse;
	int ordonnee;
	int joueur;
	int collectbls;
	int mur;
	int base_du_sol;
	int exit;
	int movesnbr;
	int ennemy;
	void *ennemy_img;
	void *ennemy1_img;
	void *ennemy2_img;
	void *ennemy3_img;
	void *ennemy4_img;
	void *ennemy5_img;

}t_compstjeu;

void 	ft_initializingvariabls(t_compstjeu *jeu);
int		ft_check_lines_extremity(t_compstjeu *jeu);
int		ft_check_map_form(t_compstjeu *jeu);
int		ft_strlen(const char *str);
int		ft_checkfirst_lastline(t_compstjeu	*jeu);
int		ft_reading_intern_map(t_compstjeu *jeu);
int 	ft_check_maps_content(t_compstjeu	*jeu);
void	ft_check_ber(char *filename);
int		ft_compteur_de_ligne(char *fichier);
int		ft_readline_maps(t_compstjeu *jeu, char	*fichier);
void	ft_putstr(char *s);
void	controling_moves(int keycode, t_compstjeu *jeu);
void 	W_key13(t_compstjeu *jeu);
void	D_key2(t_compstjeu *jeu);
void	S_key1(t_compstjeu *jeu);
void	A_key0(t_compstjeu *jeu);
void 	controling_exit(t_compstjeu *jeu);
int		checking_keys(int keycode, t_compstjeu	*jeu);
int	    quittekeys53(int keycode, t_compstjeu	*jeu);
int		quittekey17(t_compstjeu *jeu);
void	puting_image(t_compstjeu	*jeu);
void	xpmfile_to_image(t_compstjeu	*jeu);
void	ft_putnbr(int d);
void	ft_putchar(char c);
static int	animation(t_compstjeu *jeu);
static int	lencalculate2(long int a);
char	*ft_itoa(int n);
char	*ft_strjoin2( char *s1,  char *s2);
#endif
