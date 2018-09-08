/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 02:13:14 by amokone           #+#    #+#             */
/*   Updated: 2017/12/01 02:13:27 by amokone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *u_s;
	unsigned char u_c;

	u_s = (unsigned char*)s;
	u_c = (unsigned char)c;
	while (n--)
	{
		if (*u_s == u_c)
			return (u_s);
		u_s++;
	}
	return (NULL);
}
