/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 04:58:31 by amokone           #+#    #+#             */
/*   Updated: 2017/12/01 04:58:33 by amokone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *hold_s1;
	unsigned char *hold_s2;

	hold_s1 = (unsigned char*)s1;
	hold_s2 = (unsigned char*)s2;
	if (n <= 0)
		return (0);
	if (!ft_strlen((char*)hold_s1) || !ft_strlen((char*)hold_s2))
		return (*hold_s1 - *hold_s2);
	while (n-- && *hold_s1 && *hold_s2)
	{
		if ((*hold_s1 > *hold_s2) || (*hold_s1 < *hold_s2))
			return (*hold_s1 - *hold_s2);
		if (n == 0)
			break ;
		hold_s1++;
		hold_s2++;
	}
	return (*hold_s1 - *hold_s2);
}
