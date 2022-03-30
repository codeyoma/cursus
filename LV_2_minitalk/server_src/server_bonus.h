/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <yongmkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:31:42 by yongmkim          #+#    #+#             */
/*   Updated: 2022/03/02 13:58:55 by yongmkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_BONUS_H
# define SERVER_BONUS_H
# include "signal.h"
# include "../libft/libft.h"
# define NULLL ((void *)0)
# define FALSE 0
# define TRUE 1
# define ERROR -1
# define BIT 1
# define LEN 2
# define CLI 4
# define CHECK 8

typedef struct s_sig
{
	struct sigaction	con_cli;
	pid_t				pid_cli;
	pid_t				pid_srv;
	char				msg;
	int					msg_len;
	int					bit;
	int					str_end;
	int					check_uno;
	int					check_dos;
	int					check_tre;
}						t_sig;
extern t_sig			g_sig;

#endif
