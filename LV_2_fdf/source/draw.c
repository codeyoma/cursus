/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <codeyoma@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:45:05 by yongmkim          #+#    #+#             */
/*   Updated: 2022/04/26 20:18:59 by yongmkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	ft_draw_init(t_draw *draw, t_dot v1, t_dot v2)
{
	draw->dx = ft_abs(v2.x - v1.x);
	if (v1.x < v2.x)
		draw->sx = 1;
	else
		draw->sx = -1;
	draw->dy = ft_abs(v2.y - v1.y);
	if (v1.y < v2.y)
		draw->sy = 1;
	else
		draw->sy = -1;
	if (draw->dx > draw->dy)
		draw->err = draw->dx / 2;
	else
		draw->err = -draw->dy / 2;
	draw->x = v1.x;
	draw->y = v1.y;
}

void	ft_line_draw(t_dot v1, t_dot v2, t_mlx *fdf)
{
	t_draw	draw;

	ft_draw_init(&draw, v1, v2);
	while (1)
	{
		ft_put_pixel(fdf, draw.x, draw.y, v2.color);
		if (draw.x == v2.x && draw.y == v2.y)
			break ;
		draw.e2 = draw.err;
		if (draw.e2 > -draw.dx)
		{
			draw.err -= draw.dy;
			draw.x += draw.sx;
		}
		if (draw.e2 < draw.dy)
		{
			draw.err += draw.dx;
			draw.y += draw.sy;
		}
	}
}
