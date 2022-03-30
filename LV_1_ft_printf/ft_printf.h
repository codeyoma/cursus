/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <yongmkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 17:29:27 by yongmkim          #+#    #+#             */
/*   Updated: 2021/12/29 09:35:54 by yongmkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *str, ...);

int		ft_process(va_list ap, char type);

char	ft_istype(char c);
int		ft_strlen(char *str);
int		ft_putchar_rt(char c);
int		ft_putstr_rt(char *str);

#endif
