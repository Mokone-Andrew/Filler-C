/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 04:58:10 by amokone           #+#    #+#             */
/*   Updated: 2017/12/02 16:14:55 by amokone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t index;
	size_t length;

	index = 0;
	length = ft_strlen(s1);
	while (s2[index] != '\0' && index < n)
		s1[length++] = s2[index++];
	s1[length] = '\0';
	return (s1);
}
