/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 00:09:40 by mmakboub          #+#    #+#             */
/*   Updated: 2022/04/26 07:34:37 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void ft_initializingvariabls(t_compstjeu *jeu)
{
	// TO DO: INTIALISE THE OTHER VARIABLS
	jeu->joueur = 0;
	jeu->collectbls = 0;
	jeu->exit = 0;
	jeu->mapsline = 0;
	jeu->map = NULL;
	jeu->abscisse = 0;
	jeu->ordonnee = 0;
}

int main(int argc, char *argv[])
{
	t_compstjeu jeu;
	char *file;
	int i = 0;
	
	ft_initializingvariabls(&jeu);
	if (argc != 2)
	{
		ft_putstr("invalide argument");
		return(1);
	}
	file = argv[1];
	ft_check_ber(file);
	if (!(ft_readline_maps(&jeu, argv[1])))
		ft_putstr("there is an error on map");
	ft_reading_intern_map(&jeu);
	if (!(ft_check_map_form(&jeu) && ft_check_lines_extremity(&jeu) && ft_check_maps_content(&jeu) && ft_checkfirst_lastline(&jeu)))
	{
		ft_putstr("there is an error in map u should fixe it");
		return 1;
	}
	while (jeu.map[i])
	{
			printf("%s\n", jeu.map[i]);
			i++;
	}
	return 0;
}