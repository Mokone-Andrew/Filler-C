/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 04:50:41 by amokone           #+#    #+#             */
/*   Updated: 2017/12/01 04:50:43 by amokone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	u_c;
	char			*s_hold;

	s_hold = (char*)s;
	u_c = c;
	while (*s_hold)
	{
		if (*s_hold == u_c)
			return (s_hold);
		if (*++s_hold == u_c && u_c == '\0')
			return (s_hold);
	}
	return (NULL);
}
