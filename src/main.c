/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:28:26 by tomas             #+#    #+#             */
/*   Updated: 2024/08/06 22:44:21 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

// Exit the program as failure.
static void ft_error(void)
{
	fprintf(stderr, "%s", mlx_strerror(mlx_errno));
	exit(EXIT_FAILURE);
}

// // Print the window width and height.
// static void ft_hook(void* param)
// {
// 	const mlx_t* mlx = param;

// 	printf("WIDTH: %d | HEIGHT: %d\n", mlx->width, mlx->height);
// 	// if (mlx_is_key_down(param, MLX_KEY_ESCAPE))
// 	// {
// 	// 	printf("You pressed escape");
// 	// 	mlx_close_window(param);
// 	// }
// }


// static void keyhook(mlx_key_data_t keydata, void* param)
// {
// 	(void)param;
// 	if (keydata.action == MLX_PRESS)
// 	{
// 		printf("%d", keydata.key);
// 	}
// 	if (mlx_is_key_down(param, MLX_KEY_ESCAPE))
// 	{
// 		printf("You pressed escape");
// 		mlx_close_window(param);
// 	}
// }
// static void draw_square(mlx_image_t* img)
// {
// 	// const mlx_t*		mlx;
// 	// static mlx_image_t*	img;
// 	uint32_t			x;
// 	uint32_t			y;


// 	x = 0;
// 	y = x;
// 	// mlx = param;
// 	while (x < img->width)
// 	{
// 		while(y < img->height)
// 		{
// 			mlx_put_pixel(img, x, y, rand() % RAND_MAX);
// 			y++;
// 		}
// 		x++;
// 	}
// }

int32_t	main(int argc, char* argv[])
{
	if ((argc < 2) || (argc > 4))
		return (printf("Not enaugh too much arguments"));

	if (ft_strncmp(argv[1], "hello", 5) != 0)
		return (printf("Incorrect word"));
	// MLX allows you to define its core behaviour before startup.
	mlx_set_setting(MLX_MAXIMIZED, true);
	mlx_t* mlx = mlx_init(WIDTH, HEIGHT, "42Balls", true);
	if (!mlx)
		ft_error();

	/* Do stuff */

	// Create and display the image.
	mlx_image_t* img = mlx_new_image(mlx, 256, 256);
	if (!img || (mlx_image_to_window(mlx, img, 0, 0) < 0))
		ft_error();

	// Even after the image is being displayed, we can still modify the buffer.
	for (int x = 0; x > 50; x++)
	{
		for (int y = 0; y > 50; y++)
		{
			mlx_put_pixel(img, 0, 0, 0xFF0000FF);
		}
	}

	// Register a hook and pass mlx as an optional param.
	// NOTE: Do this before calling mlx_loop!
	// mlx_loop_hook(mlx, draw_square, mlx);
	// mlx_key_hook(mlx, keyhook, NULL);
	// mlx_loop_hook(mlx, ft_hook, mlx);
	mlx_loop(mlx);
	mlx_terminate(mlx);
	return (EXIT_SUCCESS);
}
