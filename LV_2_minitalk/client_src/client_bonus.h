/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <yongmkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:08:47 by yongmkim          #+#    #+#             */
/*   Updated: 2022/03/02 14:00:07 by yongmkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_BONUS_H
# define CLIENT_BONUS_H
# include "signal.h"
# include "../libft/libft.h"
# define NULLL ((void *)0)
# define FALSE 0
# define TRUE 1
# define ERROR -1

typedef struct s_sig
{
	struct sigaction	con_srv;
	pid_t				pid_cli;
	pid_t				pid_srv;
	int					bit;
	int					bit_count;
	int					connect;
	int					ack;
	int					ack_end;
}						t_sig;
extern t_sig			g_sig;

#endif
