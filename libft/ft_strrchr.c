/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 05:05:12 by amokone           #+#    #+#             */
/*   Updated: 2017/12/01 05:05:14 by amokone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		rev_index;
	char	*temp_s;

	temp_s = (char*)s;
	rev_index = ft_strlen(temp_s);
	while (rev_index > 0 && (temp_s[rev_index] != c))
		rev_index--;
	if (temp_s[rev_index] == c)
		return (temp_s + rev_index);
	else
		return (NULL);
}
