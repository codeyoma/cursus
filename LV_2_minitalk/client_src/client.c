/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <yongmkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:27:25 by yongmkim          #+#    #+#             */
/*   Updated: 2022/03/01 21:02:48 by yongmkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"

static	void	ft_sig_by_bit(char byte, int pid_srv)
{
	int	bit;

	bit = 8;
	while (--bit >= 0)
	{
		usleep(200);
		if ((byte >> bit) & 1)
		{
			if (kill(pid_srv, SIGUSR1) == ERROR)
				exit(ft_putstr_rt("[warning] kill - 1 error\n"));
		}
		else
		{
			if (kill(pid_srv, SIGUSR2) == ERROR)
				exit(ft_putstr_rt("[warning] kill - 2 error\n"));
		}
	}
}

static	void	ft_send_msg(char *str, int pid_srv)
{
	int	len;

	len = 0;
	while (str[len])
	{
		ft_sig_by_bit(str[len], pid_srv);
		usleep(293);
		len++;
	}
	if (str[len] == '\0')
		ft_sig_by_bit(127, pid_srv);
}

int	main(int ac, char *av[])
{
	int	pid_srv;

	if (ac != 3)
		exit(ft_putstr_rt("e.g. ./client \"server_pid\" \"send_msg\"\n"));
	pid_srv = ft_atoi(av[1]);
	if (pid_srv < 100 || pid_srv > 99998)
		exit(ft_putstr_rt("[warning] Invalid pid value\n"));
	ft_printf("[server pid] %d\n", pid_srv);
	ft_printf("[client pid] %d\n", getpid());
	ft_send_msg(av[2], pid_srv);
	return (0);
}
