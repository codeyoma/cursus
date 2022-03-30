/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <yongmkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:37:37 by yongmkim          #+#    #+#             */
/*   Updated: 2022/03/01 21:07:52 by yongmkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "server_bonus.h"

t_sig	g_sig;

static	int	ft_init_info(int key)
{
	if (key & CHECK)
	{
		g_sig.check_uno = 311;
		g_sig.check_dos = 293;
		g_sig.check_tre = 193;
	}
	if (key & BIT)
	{
		g_sig.bit = 7;
		g_sig.msg = 0;
	}
	if (key & LEN)
	{
		g_sig.msg_len = 0;
		g_sig.str_end = 0;
	}
	if (key & CLI)
		g_sig.pid_cli = 0;
	return (0);
}

static	void	ft_send_ack(void)
{
	usleep(100);
	if (kill(g_sig.pid_cli, SIGUSR1) == ERROR)
		ft_putstr_fd("[warning] kill error", 2);
	if (g_sig.str_end == 1)
	{
		ft_init_info(CLI);
		g_sig.str_end = 0;
	}
}

static	void	ft_receive_msg(int sig)
{
	if (sig == SIGUSR1)
		g_sig.msg |= 1 << g_sig.bit;
	if (--g_sig.bit < 0)
	{
		if (g_sig.msg == 0)
		{
			ft_putstr_fd("\n[receive size] ", 1);
			ft_putnbr_fd(g_sig.msg_len, 1);
			ft_putstr_fd("\n", 1);
			ft_init_info(BIT + LEN + CHECK);
			g_sig.str_end = 1;
		}
		else
		{
			ft_putchar_fd(g_sig.msg, 1);
			g_sig.msg_len++;
			ft_init_info(BIT);
		}
	}
	ft_send_ack();
}

static	void	ft_sig_handler(int sig, siginfo_t *info, void *ucontext)
{
	if ((g_sig.pid_cli == 0) && (info->si_pid != 0))
	{
		g_sig.pid_cli = info->si_pid;
		ft_putstr_fd("\n[client pid] ", 1);
		ft_putnbr_fd(g_sig.pid_cli, 1);
		ft_putstr_fd("\n", 1);
	}
	if ((info->si_pid != 0) && (g_sig.pid_cli == info->si_pid))
	{
		if (sig == SIGUSR1 || sig == SIGUSR2)
			ft_receive_msg(sig);
	}
	else if (g_sig.pid_cli != info->si_pid)
	{
		if (info->si_pid == 0)
			ft_putstr_fd("[warning] incoming signal from byself [pid 0]\n", 2);
		else if (info->si_pid != 0)
		{
			if (kill(info->si_pid, SIGUSR2) == ERROR)
				ft_putstr_fd("[warning] kill error", 2);
		}
	}
}

int	main(void)
{
	ft_init_info(BIT + LEN + CLI + CHECK);
	g_sig.pid_srv = getpid();
	ft_putstr_fd("[server pid] ", 1);
	ft_putnbr_fd(g_sig.pid_srv, 1);
	ft_putstr_fd("\n", 1);
	if (sigemptyset(&g_sig.con_cli.sa_mask) == ERROR)
		exit(ft_putstr_rt("[warning] sigemptyset error"));
	g_sig.con_cli.sa_flags = SA_SIGINFO;
	g_sig.con_cli.sa_sigaction = ft_sig_handler;
	if (sigaction(SIGUSR1, &g_sig.con_cli, NULLL) == ERROR)
		exit(ft_putstr_rt("[warning] sigaction - 1 error"));
	if (sigaction(SIGUSR2, &g_sig.con_cli, NULLL) == ERROR)
		exit(ft_putstr_rt("[warning] sigaction - 2 error"));
	while (1)
	{
		g_sig.check_uno = g_sig.check_dos;
		pause();
		g_sig.check_dos = g_sig.check_tre;
		if (g_sig.check_uno == g_sig.check_tre && g_sig.check_uno == g_sig. bit)
			exit(ft_putstr_rt("[warning] Signal Jamed -> Server shut down\n"));
		g_sig.check_tre = g_sig.bit;
	}
	return (0);
}
