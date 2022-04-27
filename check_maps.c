
#include "so_long.h"

int ft_check_lines_extremity(t_compstjeu *jeu)
{
	int len;
	int i;

	len = ft_strlen(jeu->map[0]);
	i = 0;
	while (jeu->map[i])
	{
		if (jeu->map[i][0] != '1' || jeu->map[i][len - 1] != '1')
			return (0);
		i++;
	}
	return (1);
}
int ft_check_map_form(t_compstjeu *jeu) //savoir la lonfeur du premiere ligne et la commparer avec les autres lignes
{
	int len;
	int i;

	i = 0;
	len = ft_strlen(jeu->map[0]);
	while (jeu->map[i])
	{
		if (len != ft_strlen(jeu->map[i]))
			return (0);
		i++;
	}
	return (1);
}

int ft_checkfirst_lastline(t_compstjeu *jeu)
{
	int i;

	i = 0;
	while (jeu->map[0][i] && jeu->map[jeu->mapsline - 1][i])
	{
		if (jeu->map[0][i] != '1' || jeu->map[jeu->mapsline - 1][i] != '1')
			return (0);
		i++;
	}
	return (1);
}

int ft_check_maps_content(t_compstjeu *jeu)
{
	if (jeu->joueur == 1 && jeu->collectbls >= 1 && jeu->exit >= 1)
		return (1);
	return (0);
}

void ft_check_ber(char *filename)
{
	int len;
	len = ft_strlen(filename);
	
	if (filename[len - 4] != '.' || filename[len - 3] != 'b' || filename[len - 2] != 'e' || filename[len - 1] != 'r')
	{
		ft_putstr("this file's name needs to be ended by .ber");
		exit(1);
	}
}