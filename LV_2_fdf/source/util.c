/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <codeyoma@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:11:42 by yongmkim          #+#    #+#             */
/*   Updated: 2022/04/26 20:58:13 by yongmkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fdf.h"

void	ft_print_dot(t_mlx *fdf)
{
	int		x;
	int		y;

	y = 0;
	ft_printf("height: %d\nwidth: %d\n", fdf->map->height, fdf->map->width);
	ft_printf("print - matrix - start\n");
	while (y < fdf->map->height)
	{
		x = 0;
		ft_printf("[ %d ] : ", y);
		while (x < fdf->map->width)
		{
			ft_printf("[%d]", fdf->map->matrix[(y * fdf->map->width) + x]->z);
			++x;
		}
		ft_printf("\n");
		++y;
	}
	ft_printf("print - matrix - end\n");
}

void	ft_min_max_altitude(t_map **map)
{
	int	x;
	int	y;
	int	size;

	(*map)->min_altitude = (*map)->matrix[0]->z;
	(*map)->max_altitude = (*map)->matrix[0]->z;
	y = -1;
	while (++y < (*map)->height)
	{
		x = -1;
		while (++x < (*map)->width)
		{
			size = (*map)->matrix[(y * (*map)->width) + x]->z;
			if ((*map)->max_altitude < size)
				(*map)->max_altitude = size;
			if ((*map)->min_altitude > size)
				(*map)->min_altitude = size;
		}
	}
}

t_dot	*fdf_atoi(char *str, int x, int y)
{
	t_dot	*temp;
	int		cnt;

	temp = malloc(sizeof(t_dot));
	if (temp == NULLL)
		return (NULLL);
	temp->x = x;
	temp->y = y;
	temp->z = ft_atoi_base(str, 10);
	cnt = ft_strchr_pos(str, ',');
	if (cnt == 0)
		temp->color = 0xffffff;
	else
		temp->color = ft_atoi_base(str + cnt + 1, 16);
	return (temp);
}

void	ft_mtm_util(char **split, int size, t_list **list)
{
	ft_matrix_free(split, size);
	(*list) = (*list)->next;
}

void	ft_starting_point(t_mlx *temp)
{
	temp->info->x_start = (HD_WIDTH) - (temp->info->x_scale * \
			temp->map->width / 2);
	temp->info->y_start = (HD_HEIGHT / 2) - (temp->info->y_scale * \
			temp->map->height / 2);
}
