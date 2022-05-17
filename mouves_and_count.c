/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouves_and_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 00:26:13 by mmakboub          #+#    #+#             */
/*   Updated: 2022/05/17 23:03:31 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void controling_exit(t_compstjeu *jeu)
{
	int x;
	int y;
	int	i;
	
	x = jeu->abscisse;
	y = jeu->ordonnee;
	if (jeu->collectbls == 0)
	{
		ft_putstr("congrats!!!! You win ;)\n");
		i = 0;
		while (i < jeu->mapsline)
			free(jeu->map[i++]);
		free(jeu->map);
		mlx_destroy_window(jeu->mlx, jeu->win);
		exit(0);
	}
	else
		jeu->map[y][x] = 'P';
}

void	controling_moves(int keycode, t_compstjeu *jeu)
{
	int x;
	int y;
	x = jeu->abscisse;
	y = jeu->ordonnee;
	if(keycode == 13 && y - 1 >= 0 && jeu->map[y - 1][x] != '1')
		W_key13(jeu);
	if(keycode == 0 && x - 1 >= 0 && jeu->map[y][x - 1] != '1')
		A_key0(jeu);
	if(keycode == 1 && y + 1 < jeu->mapsline && jeu->map[y + 1][x] != '1')
		S_key1(jeu);
	if(keycode == 2 && jeu->map[y][x + 1] != '\0' && jeu->map[y][x + 1] != '1')
		D_key2(jeu);
}
int	quittekeys53(int keycode, t_compstjeu	*jeu)
{
	(void)keycode;
	mlx_destroy_window(jeu->mlx, jeu->win);
	int i = 0;
	while (i < jeu->mapsline)
		free(jeu->map[i++]);
	free(jeu->map);
	exit(1);
	return(0);
}

int	checking_keys(int keycode, t_compstjeu	*jeu)
{
	int x;
	int y;
	x = jeu->abscisse;
	y = jeu->ordonnee;
	if(keycode == 53)
		quittekeys53(keycode, jeu);
	if((keycode >= 0 && keycode <= 2) || keycode == 13)
		controling_moves(keycode, jeu);
	mlx_clear_window(jeu->mlx, jeu->win);
	puting_image(jeu);
	printf(" moves = %d\n",jeu->movesnbr);
	return(0);
}