/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puting_image.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 07:16:55 by mmakboub          #+#    #+#             */
/*   Updated: 2022/04/26 07:46:50 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	dressage(t_compstjeu	*jeu)
{
	int ordonnee;
	int abscisse;
	
	
	jeu->mlx = mlx_init();
	jeu->win = mlx_new_window(jeu->mlx, ft_strlen(jeu->map[0])*80, jeu->mapsline*80, "so_long");
	mlx_key_hook(jeu->win, press_key, jeu);
	mlx_hook(win, 17, 0, jeu);
	mlx_loop(jeu->mlx);
	
}