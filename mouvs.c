/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:47:06 by mmakboub          #+#    #+#             */
/*   Updated: 2022/05/16 22:38:34 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void W_key13(t_compstjeu *jeu)
{
	int x;
	int y;
	
	x = jeu->abscisse;
	y = jeu->ordonnee;
	if(jeu->map[y - 1][x] == 'C')
	{
		jeu->map[y - 1][x] = 'P';
		jeu->map[y][x] = '0';
		jeu->ordonnee--;
		jeu->collectbls--;
		jeu->movesnbr++;
	}
	else if(jeu->map[y - 1][x] == '0')
	{
		jeu->map[y - 1][x] = 'P';
		jeu->map[y][x] = '0';
		jeu->ordonnee--;
		jeu->movesnbr++;
	}
	else if(jeu->map[y - 1][x] == 'E')
	{
		controling_exit(jeu);
		jeu->movesnbr++;
	}
	
}

void	A_key0(t_compstjeu *jeu)
{
	int x;
	int y;
	
	x = jeu->abscisse;
	y = jeu->ordonnee;
	if(jeu->map[y][x - 1] == 'C')
		{
			jeu->map[y][x - 1] = 'P';
		    jeu->map[y][x] = '0';
		    jeu->abscisse--;
			jeu->collectbls--;
			jeu->movesnbr++;
	    }
		if(jeu->map[y][x - 1] == '0')
		{
			jeu->map[y][x - 1] = 'P';
		    jeu->map[y][x] = '0';
		    jeu->abscisse--;
			jeu->movesnbr++;
	    }
		if(jeu->map[y][x - 1] == 'E')
		{
		
			controling_exit(jeu);
			jeu->movesnbr++;
		}
}

void	S_key1(t_compstjeu *jeu)
{
	int x;
	int y;
	
	x = jeu->abscisse;
	y = jeu->ordonnee;
	if(jeu->map[y + 1][x] == 'C')
	{
		jeu->map[y + 1][x] = 'P';
		jeu->map[y][x] = '0';
		jeu->ordonnee++;
		jeu->collectbls--;
		jeu->movesnbr++;
	}
	if(jeu->map[y + 1][x] == '0')
	{
		jeu->map[y + 1][x] = 'P';
		jeu->map[y][x] = '0';
		jeu->ordonnee++;
		jeu->movesnbr++;
	}
	if(jeu->map[y + 1][x] == 'E')
	{
		controling_exit(jeu);
		jeu->movesnbr++;
	}	
}

void	D_key2(t_compstjeu *jeu)
{
	int x;
	int y;
	
	x = jeu->abscisse;
	y = jeu->ordonnee;
	if(jeu->map[y][x + 1] == 'C')
		{
			jeu->map[y][x + 1] = 'P';
		    jeu->map[y][x] = '0';
		    jeu->abscisse++;
			jeu->collectbls--;
			jeu->movesnbr++;
	    }
		if(jeu->map[y][x + 1] == '0')
		{
			jeu->map[y][x + 1] = 'P';
		    jeu->map[y][x] = '0';
		    jeu->abscisse++;
			jeu->movesnbr++;
	    }
		if(jeu->map[y][x + 1] == 'E')
		{
			controling_exit(jeu);
			jeu->movesnbr++;
		}
}