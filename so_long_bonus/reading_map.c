/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 06:56:23 by mmakboub          #+#    #+#             */
/*   Updated: 2022/05/16 19:35:03 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int ft_reading_intern_map(t_compstjeu *jeu)
{
	int i;
	int j;

	i = 0;
	while (jeu->map[i])
	{
		j = 0;
		while (jeu->map[i][j])
		{
			if (jeu->map[i][j] == 'P')
				jeu->joueur++;
			if (jeu->map[i][j] == 'E')
				jeu->exit++;
			if (jeu->map[i][j] == 'C')
				jeu->collectbls++;
			if(jeu->map[i][j] == 'M')
				jeu->ennemy++;
			j++;
		}
		i++;
	}
	return(jeu->collectbls);
}
int ft_compteur_de_ligne(char *fichier)
{
	char *line;
	int fd;
	int count;

	count = 0;
	fd = open(fichier, O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
		{
			close(fd);
			break;
		}
		count++;
	}
	return (count);
}
int ft_readline_maps(t_compstjeu *jeu, char *fichier)
{
	int fd;
	char *ptr;
	int len = strlen(ptr);
	fd = open(fichier, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("error in reading maps\n");
		exit(1);
	}
	jeu->mapsline = ft_compteur_de_ligne(fichier);
	jeu->map = (char **)malloc((jeu->mapsline + 1) * sizeof(char *)); 
	if (!(jeu->map))
		return (0);
	int i = 0;
	while (1)
	{
		ptr = get_next_line(fd);
		if (!ptr)
			break ;
		if (*ptr == '\n' || (i == jeu->mapsline - 1 && ptr[len - 1] == '\n'))
		{
			ft_putstr("Error line !\n");
			exit(1);
		}
		if (ptr[len - 1] == '\n')
			ptr[len - 1] = 0;
		if (ft_strchr(ptr, 'P') != NULL)
		{
			jeu->ordonnee = i;
			jeu->abscisse = ft_strchr(ptr, 'P') - ptr;
		}
		jeu->map[i++] = ptr;
	}
	jeu->map[i] = NULL;
	close(fd);
	return (1);
}
