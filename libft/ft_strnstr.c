/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 05:04:43 by amokone           #+#    #+#             */
/*   Updated: 2017/12/01 05:04:44 by amokone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	size_t	count;

	index = 0;
	while (big[index] != '\0' && index < len)
	{
		count = 0;
		while (little[count])
		{
			if (little[count] == big[index + count])
				count++;
			else
				break ;
		}
		if (!little[count] && len >= index + count)
			return ((char*)(big + index));
		index++;
	}
	return (NULL);
}
