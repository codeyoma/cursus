/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <yongmkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:26:54 by yongmkim          #+#    #+#             */
/*   Updated: 2022/03/07 23:35:41 by yongmkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlist_last(t_dlist *lst)
{
	if (lst)
	{
		while (lst->next)
		{
			lst = lst->next;
		}
	}
	return (lst);
}

void	ft_dlist_add_back(t_dlist **lst, t_dlist *add)
{
	t_dlist	*temp;

	if (add)
	{
		temp = ft_dlist_last(*lst);
		if (*lst)
		{
			temp->next = add;
			add->pre = temp;
		}
		else
			*lst = add;
	}
}

void	ft_dlist_add_front(t_dlist **lst, t_dlist *add)
{
	if (add)
	{
		add->next = *lst;
		add->pre = NULLL;
		(*lst)->pre = add;
		*lst = add;
	}
}

t_dlist	*ft_dlist_new(ssize_t value)
{
	t_dlist	*temp;

	temp = ft_calloc(1, sizeof(t_dlist));
	if (!temp)
		return (NULLL);
	temp->value = value;
	temp->next = NULLL;
	temp->pre = NULLL;
	return (temp);
}
