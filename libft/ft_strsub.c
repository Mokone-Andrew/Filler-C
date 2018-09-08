/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 05:06:26 by amokone           #+#    #+#             */
/*   Updated: 2017/12/01 05:06:29 by amokone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s1, unsigned int start, size_t len)
{
	char	*sub;
	size_t	index;

	index = 0;
	if (!s1 || !(sub = ft_strnew(len)))
		return (NULL);
	while (index < len)
		sub[index++] = s1[start++];
	return (sub);
}
