#include <mlx.h>

int	render_next_frame(void *YourStruct);

int	main(void)
{
	void	*mlx;

	mlx = mlx_init();
	mlx_loop_hook(mlx, render_next_frame, YourStruct);
	mlx_loop(mlx);
}
