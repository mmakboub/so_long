
 #include<string.h>
 #include<stdio.h>
 #include<stdlib.h>
 #include<unistd.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
void	ft_putstr(char *s)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
void	check_ber(char *map)
{
	int len;
	len = ft_strlen(map);
	if(map[len - 4] != '.' || map[len - 3] != 'b' || map[len - 2] != 'e' || map[len - 1] != 'r')
	{
		ft_putstr("syntaxe error");
		exit(EXIT_FAILURE);
	} 
	ft_putstr("mariam is the sweetest")
}
int main(int argc, char *av[])
{
	if(argc != 2)
		ft_putstr("invalide argument");
	check_ber(av[1]);
	return(0);
}