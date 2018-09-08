/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 02:12:56 by amokone           #+#    #+#             */
/*   Updated: 2017/12/01 02:12:59 by amokone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	u_c;
	unsigned char	*u_dst;
	unsigned char	*u_src;
	size_t			index;

	u_c = (unsigned char)c;
	u_dst = (unsigned char*)dst;
	u_src = (unsigned char*)src;
	index = 0;
	while (index++ < n)
	{
		if (*u_src == u_c)
		{
			*u_dst = u_c;
			u_dst++;
			return (u_dst);
		}
		*u_dst++ = *u_src++;
	}
	return (NULL);
}
