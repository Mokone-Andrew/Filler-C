/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 04:46:09 by amokone           #+#    #+#             */
/*   Updated: 2017/12/01 04:46:12 by amokone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*u_b;
	unsigned char	u_c;
	int				index;

	u_b = (unsigned char*)b;
	u_c = (unsigned char)c;
	index = 0;
	while (n--)
	{
		u_b[index++] = u_c;
	}
	return (u_b);
}
