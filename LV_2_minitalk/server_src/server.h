/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <yongmkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:27:19 by yongmkim          #+#    #+#             */
/*   Updated: 2022/03/02 13:58:42 by yongmkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H
# include "signal.h"
# include "../libft/libft.h"
# define NULLL ((void *)0)
# define FALSE 0
# define TRUE 1
# define ERROR -1

typedef struct s_sig
{
	char		msg;
	int			bit;
}				t_sig;
extern t_sig	g_sig;

#endif
