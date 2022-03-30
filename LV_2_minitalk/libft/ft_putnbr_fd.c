/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <codeyoma@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 01:50:03 by yongmkim          #+#    #+#             */
/*   Updated: 2021/07/14 16:28:25 by yongmkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_pos(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static int	ft_iter_div(int *n, int pos)
{
	int	temp;
	int	front_nbr;

	temp = 1;
	while (pos > 1)
	{
		temp *= 10;
		pos--;
	}
	front_nbr = *n / temp;
	*n -= (temp * front_nbr);
	return (front_nbr);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	cnt;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == INT_MIN)
			return (ft_putstr_fd("2147483648", fd));
		n *= -1;
	}
	cnt = ft_pos(n);
	while (cnt > 0)
	{
		ft_putchar_fd("0123456789"[ft_iter_div(&n, cnt)], fd);
		cnt--;
	}
}
