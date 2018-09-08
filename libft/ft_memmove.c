/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 04:45:27 by amokone           #+#    #+#             */
/*   Updated: 2017/12/01 04:45:29 by amokone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*u_dst;
	const char	*u_src;
	size_t		index;

	index = 0;
	u_dst = (char*)dst;
	u_src = (const char*)src;
	if (n <= 0)
		return (u_dst);
	if (u_src < u_dst)
	{
		index = n;
		while (index)
		{
			u_dst[index - 1] = u_src[index - 1];
			index--;
		}
	}
	else
		ft_memcpy(u_dst, u_src, n);
	return (u_dst);
}
