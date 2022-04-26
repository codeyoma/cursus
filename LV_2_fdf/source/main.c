/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <codeyoma@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:01:02 by yongmkim          #+#    #+#             */
/*   Updated: 2022/04/26 21:48:19 by yongmkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "mlx.h"
#include <math.h>
#include "libft.h"

void	ft_mlx_flush(t_mlx *temp, int key)
{
	ft_memflush((void **)&(temp->map));
	if (temp->win != NULLL)
		mlx_destroy_window(temp->mlx, temp->win);
	if (temp->img != NULLL)
		mlx_destroy_image(temp->mlx, temp->img);
	if (temp->info != NULLL)
	{
		if (temp->info->title != NULLL)
			ft_memflush((void **)&(temp->info->title));
		ft_memflush((void **)&(temp->info));
	}
	if (temp->mlx != NULLL)
		ft_memflush((void **)&(temp->mlx));
	if (temp != NULLL)
		ft_memflush((void **)&temp);
	if (key == STD_ERR)
		ft_error_handler(4, "Init ");
	ft_error_handler(0, NULLL);
}

static t_mlx	*ft_first_init_set_value(void)
{
	t_mlx	*temp;

	temp = (t_mlx *)malloc(sizeof(t_mlx));
	if (temp != NULLL)
	{
		temp->mlx = NULLL;
		temp->win = NULLL;
		temp->img = NULLL;
		temp->info = NULLL;
	}
	return (temp);
}

static void	ft_init_img(t_mlx *temp, char *file)
{
	temp->img = mlx_new_image(temp->mlx, HD_HEIGHT, HD_WIDTH);
	if (temp->img == NULLL)
		ft_mlx_flush(temp, STD_ERR);
	temp->img_addr = mlx_get_data_addr(temp->img, &temp->bpp, &temp->size, \
														&temp->endian);
	if (temp->img_addr == NULLL)
		ft_mlx_flush(temp, STD_ERR);
	temp->info = (t_info *)malloc(sizeof(t_info));
	if (temp->info == NULLL)
		ft_mlx_flush(temp, STD_ERR);
	temp->info->title = ft_strdup(file);
	temp->info->x_scale = HD_WIDTH / temp->map->width / 2;
	temp->info->y_scale = HD_HEIGHT / temp->map->height / 2;
	temp->info->scale = ft_min(temp->info->x_scale, temp->info->y_scale);
	temp->info->horizontal = sqrt(pow(temp->map->width, 2) \
							+ pow(temp->map->height, 2));
	temp->info->vertical = ft_abs(temp->map->max_altitude \
								- temp->map->min_altitude);
	temp->info->aspect_ratio = ft_max(temp->map->height / temp->map->width, \
			temp->map->width / temp->map->height);
	ft_starting_point(temp);
	if (temp->info->title == NULLL)
		ft_mlx_flush(temp, STD_ERR);
}

static t_mlx	*ft_init(t_map *map, char *file)
{
	t_mlx	*temp;

	temp = ft_first_init_set_value();
	if (temp == NULLL)
	{
		ft_memflush((void **)&map);
		ft_error_handler(4, "Init ");
	}
	temp->map = map;
	temp->mlx = mlx_init();
	if (temp->mlx == NULLL)
		ft_mlx_flush(temp, STD_ERR);
	temp->win = mlx_new_window(temp->mlx, HD_HEIGHT, HD_WIDTH, "FDF");
	if (temp->win == NULLL)
		ft_mlx_flush(temp, STD_ERR);
	ft_init_img(temp, file);
	return (temp);
}

int	main(int argc, char *argv[])
{
	t_mlx	*fdf;
	t_map	*map;

	ft_argument_consistency(argc);
	ft_map_consistency(argv, &map);
	fdf = ft_init(map, argv[1]);
	ft_printf("in main\n");
	ft_printf("[%d, %d]\n", fdf->map->min_altitude, fdf->map->max_altitude);
	//ft_print_dot(fdf);
	ft_render(fdf);
	ft_event_handler(fdf);
	mlx_loop(fdf->mlx);
	return (0);
}
