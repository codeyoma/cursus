/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <yongmkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:27:17 by yongmkim          #+#    #+#             */
/*   Updated: 2022/03/01 21:05:08 by yongmkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"

t_sig	g_sig;

static	void	ft_sig_handler(int sig)
{
	if (sig == SIGUSR1)
		g_sig.msg |= 1 << g_sig.bit;
	if (--g_sig.bit < 0)
	{
		if (g_sig.msg == 127)
			write(1, "\n", 1);
		else
			ft_putchar_fd(g_sig.msg, 1);
		g_sig.bit = 7;
		g_sig.msg = 0;
	}
	usleep(100);
}

int	main(void)
{
	g_sig.bit = 7;
	g_sig.msg = 0;
	ft_printf("[server pid] %d\n", getpid());
	if (signal(SIGUSR1, ft_sig_handler) == SIG_ERR)
		exit(ft_putstr_rt("signal - 1 error\n"));
	if (signal(SIGUSR2, ft_sig_handler) == SIG_ERR)
		exit(ft_putstr_rt("signal - 2 error\n"));
	while (1)
		pause();
	return (0);
}
