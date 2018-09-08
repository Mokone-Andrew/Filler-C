/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 02:09:58 by amokone           #+#    #+#             */
/*   Updated: 2017/12/01 02:10:00 by amokone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;

	temp = (*alst);
	while (temp)
	{
		del(temp->content, temp->content_size);
		free((*alst));
		(*alst) = NULL;
		temp = temp->next;
		(*alst) = temp;
	}
}
