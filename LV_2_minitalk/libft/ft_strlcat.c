/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <codeyoma@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 23:18:23 by yongmkim          #+#    #+#             */
/*   Updated: 2021/05/12 16:13:46 by yongmkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*dst && i < dstsize)
	{
		dst++;
		i++;
	}
	while (*src && i + 1 < dstsize)
	{
		*(dst++) = *(src++);
		i++;
	}
	if (i < dstsize)
		*dst = 0;
	while (*(src++))
		i++;
	return (i);
}
