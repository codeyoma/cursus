/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <yongmkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 20:31:34 by yongmkim          #+#    #+#             */
/*   Updated: 2021/12/28 21:56:31 by yongmkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_istype(char c)
{
	char	*type;

	if (!c)
		return (0);
	type = "cspdiuxX%";
	while (*type)
	{
		if (c == *type)
			return (*type);
		type++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		cnt++;
		str++;
	}
	return (cnt);
}

int	ft_putchar_rt(char c)
{
	if (!c)
	{
		write(1, "\0", 1);
		return (1);
	}
	return (write(1, &c, 1));
}

int	ft_putstr_rt(char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (ft_putstr_rt("(null)"));
	while (str[len])
		ft_putchar_rt(str[len++]);
	return (len);
}
