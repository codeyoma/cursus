/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <codeyoma@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:07:50 by yongmkim          #+#    #+#             */
/*   Updated: 2022/04/24 17:22:19 by yongmkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "mlx.h"
#include "key_event.h"

static int	key_press(int key, t_mlx *fdf)
{
	if (key == KC_ESC)
	{
		ft_mlx_flush(fdf, 0);
		ft_error_handler(1024, "");
	}
	/*
	if (key == 'p')
		 parallel exec
	*/
	return (1);
}

void	ft_event_handler(t_mlx *fdf)
{
	mlx_key_hook(fdf->win, key_press, fdf);
}
