/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 05:06:11 by amokone           #+#    #+#             */
/*   Updated: 2017/12/01 05:06:12 by amokone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char	*ret;
	size_t	len_little;

	ret = (char*)big;
	len_little = ft_strlen((char*)little);
	if (*ret && len_little == 0)
		return (ret);
	while (*ret)
	{
		if (ft_strncmp(ret, little, len_little) == 0)
			return (ret);
		ret++;
	}
	if (ret == little)
		return (ret);
	return (NULL);
}
