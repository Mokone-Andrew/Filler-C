/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 02:11:33 by amokone           #+#    #+#             */
/*   Updated: 2017/12/01 02:11:42 by amokone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *temp;
	t_list *ret;

	ret = f(lst);
	temp = ret;
	while ((lst = lst->next))
	{
		temp->next = f(lst);
		temp = temp->next;
	}
	temp->next = NULL;
	return (ret);
}
