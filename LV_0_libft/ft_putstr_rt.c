/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_rt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <yongmkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 21:27:49 by yongmkim          #+#    #+#             */
/*   Updated: 2022/03/01 21:28:09 by yongmkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
