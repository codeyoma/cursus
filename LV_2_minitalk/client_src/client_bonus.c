/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <yongmkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:29:19 by yongmkim          #+#    #+#             */
/*   Updated: 2022/03/01 21:06:42 by yongmkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "client_bonus.h"

t_sig	g_sig;

static	void	ft_sig_by_bit(char byte)
{
	g_sig.bit = 7;
	g_sig.bit_count = 8;
	while (g_sig.bit >= 0)
	{
		usleep(200);
		if ((1 << g_sig.bit) & byte)
		{
			g_sig.ack = 0;
			if (kill(g_sig.pid_srv, SIGUSR1) == ERROR)
				exit(ft_putstr_rt("[warning] kill - 1 error\n"));
		}
		else
		{
			g_sig.ack = 0;
			if (kill(g_sig.pid_srv, SIGUSR2) == ERROR)
				exit(ft_putstr_rt("[warning] kill - 2 error\n"));
		}
		pause();
	}
}

static	void	ft_send_msg(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		ft_sig_by_bit(str[len]);
		usleep(191);
		len++;
	}
	if (str[len] == '\0')
	{
		g_sig.ack_end = 1;
		ft_sig_by_bit(0);
	}
	ft_putstr_fd("[send size] ", 1);
	ft_putnbr_fd(len, 1);
	ft_putstr_fd("\n", 1);
}

static	void	ft_sig_handler(int sig, siginfo_t *info, void *ucontext)
{
	if (info->si_pid == g_sig.pid_srv)
	{
		if (g_sig.ack == 0)
		{
			g_sig.ack = 1;
			if (g_sig.connect == 0)
			{
				g_sig.connect = 1;
				if (sig == SIGUSR1)
					ft_putstr_fd("[server] Connected\n", 1);
				else if (sig == SIGUSR2)
					exit(ft_putstr_rt("[server] Try later\n"));
			}
			if (sig == SIGUSR1)
			{
				g_sig.bit -= 1;
				--g_sig.bit_count;
			}
			else if (sig == SIGUSR2)
				ft_putstr_fd("[server] Some signal error\n", 2);
			if (g_sig.ack_end == 1 && g_sig.bit_count == 0 && g_sig.bit < 0)
				ft_putstr_fd("[server] All done\n", 1);
		}
	}
}

int	main(int ac, char *av[])
{
	if (ac != 3)
		exit(ft_putstr_rt("e.g. ./client \"server_pid\" \"send_msg\"\n"));
	g_sig.pid_srv = ft_atoi(av[1]);
	g_sig.pid_cli = getpid();
	if (g_sig.pid_srv < 100 || g_sig.pid_srv > 99998)
		exit(ft_putstr_rt("[warning] Invalid pid value\n"));
	g_sig.connect = 0;
	g_sig.ack_end = 0;
	g_sig.ack = 1;
	if (sigemptyset(&g_sig.con_srv.sa_mask) == ERROR)
		exit(ft_putstr_rt("[warning] sigemptyset error"));
	g_sig.con_srv.sa_flags = SA_SIGINFO;
	g_sig.con_srv.sa_sigaction = ft_sig_handler;
	if (sigaction(SIGUSR1, &g_sig.con_srv, NULLL) == ERROR)
		exit(ft_putstr_rt("[warning] sigaction - 1 error"));
	if (sigaction(SIGUSR2, &g_sig.con_srv, NULLL) == ERROR)
		exit(ft_putstr_rt("[warning] sigaction - 2 error"));
	ft_printf("[server pid] %d\n", g_sig.pid_srv);
	ft_printf("[client pid] %d\n", g_sig.pid_cli);
	ft_send_msg(av[2]);
	return (0);
}
