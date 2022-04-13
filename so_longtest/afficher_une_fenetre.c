#include <mlx.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int n)
{
	long	i;

	i = n;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * -1;
	}
	if (i <= 9)
		ft_putchar(i + '0');
	if (i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
}

int		deal_key(int key, void *param)
{
	static int count;
	// count++;
	// ft_putnbr(count);
	// write(1, "\n", 1);
	printf("%d\n",key);
	return(0);
}

int main()
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*ptr_image;
	int		x, y;
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 800, 800, "mlx_42");
	mlx_pixel_put(mlx_ptr, win_ptr, 250, 250, 0xFFFFFF);
	ptr_image = mlx_xpm_file_to_image(mlx_ptr, "image.xpm", &x, &y);
	mlx_put_image_to_window(mlx_ptr, win_ptr, ptr_image, 250, 250);
	mlx_key_hook(win_ptr, deal_key, (void *)0);
	mlx_loop(mlx_ptr);
}