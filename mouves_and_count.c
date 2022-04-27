/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouves_and_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 00:26:13 by mmakboub          #+#    #+#             */
/*   Updated: 2022/04/26 06:56:14 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"
int	press_key(int keycode, t_compstjeu	*jeu)
{
	if(keycode == 13)
		haut(jeu);
	if(keycode == 0)
		gauche(jeu);
	if(keycode == 7)
		bas(jeu);
	if (keycode == 2);
		droit(jeu);
	if(keycode = 53)
		exit(1);
	
}

