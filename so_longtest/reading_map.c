 typedef struct s_compstjeu{
	char **map;
	int	longeur;
	int largeur;
	int joueur;
	int collectbls;
	int	mur;
	int	base_du_sol;
	int abscisse;
	int ordonnee;
	int exit;
	int invalidcaract;

}t_compstjeu;

void initializingvariabls(t_compstjeu *jeu)
{
	jeu->abscisse = 0;
	jeu->ordonnee = 0;
	jeu->joueur = 0;
	jeu->collectbls = 0;
	jeu->exit = 0;
	jeu->invalidcaract = 0;
}
 
 void reading_intern_map(t_compstjeu *jeu)
 {
	 initializingvariabls(&jeu);
	 

	 
 }

void	check_ber(char *map)
{
	int len;
	len = ft_strlen(map);
	if(map[len - 4] != '.' || map[len - 3] != 'b' || map[len - 2] != 'e' || map[len - 1] != 'r')
	{
		ft_putstr("this file needs to be ended by .ber");
		exit(EXIT_FAILURE);
	} 
int		ft_soncompteur(char *fichier)
{
	char *line;
	int fd;
	int count;

	count = 0;
	fd = open(fichier, O_RDONLY);
	while(1);
	{
		line = get_next_line(fd);
		if(line = NULL)
		{
			close(fd);
			break;
		}
	}
	count++;
	return(count);
}
int		readline_maps(t_compstjeu	*jeu, char	*fichier) // passage par adresse pour stocker
{
	int fd;
	char *ptr;
	int	mapsline;
	fd = open(fichier, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("error in reading maps\n");
		exit(1);
	}
	mapsline = ft_soncomppteurteur(fichier)// donnew le nombre de ligne dans note maps
	jeu->map = (char *)malloc((mapsline + 1) * sizeof(char)); // aloue un espace dans la memoire pour stocker les infors du jeu;
	if (!(jeu->map))
		return(NULL);
	mapsline = 0
	while(1)
	{
		ptr = get_next_line(fd);// pour nous donne les lignes du maps 
		if(ptr = NULL)
			break;
		jeu->map[mapsline++] = ptr; //on met les lignes retourner de get next line dans notre jeu en se basant sur l'incrumentation de mapsline 
	}
	jeu->map[mapsline] = NULL;
	close(fd);
	jeu->longeur = mapsline;
	jeu->largeur = ft_strlen(jeu->map[0] - 1);
	return(1);

}
int main(int argc, char *av[])
{
	t_compstjeu *jeu;
	char		*file;

	file = argv[1];
	if(argc != 2)
		ft_putstr("invalide argument");
		return(1);
	check_ber(file))
	if (!(readlinemaps(&jeu, argv[1]));
		ft_putstr("there is an error on map")
	check_maps_content(&jeu)
	
}
