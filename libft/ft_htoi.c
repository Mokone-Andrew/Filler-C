/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 02:04:05 by amokone           #+#    #+#             */
/*   Updated: 2017/12/01 02:04:09 by amokone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

int		ft_htoi(const char *s)
{
	unsigned long int	ret;
	int					index;

	index = 0;
	ret = 0;
	while ((int)ft_strlen(s) - (++index) >= 0)
	{
		if (s[index - 1] == 'a' || s[index - 1] == 'A')
			ret += 10 * (pow(16, (ft_strlen(s) - index)));
		else if (s[index - 1] == 'b' || s[index - 1] == 'B')
			ret += 11 * (pow(16, (ft_strlen(s) - index)));
		else if (s[index - 1] == 'c' || s[index - 1] == 'C')
			ret += 12 * (pow(16, (ft_strlen(s) - index)));
		else if (s[index - 1] == 'd' || s[index - 1] == 'D')
			ret += 13 * (pow(16, (ft_strlen(s) - index)));
		else if (s[index - 1] == 'e' || s[index - 1] == 'E')
			ret += 14 * (pow(16, (ft_strlen(s) - index)));
		else if (s[index - 1] == 'f' || s[index - 1] == 'F')
			ret += 15 * (pow(16, (ft_strlen(s) - index)));
		else if (ft_isdigit(s[index - 1]))
			ret += (s[index - 1] - '0') * (pow(16, (ft_strlen(s) - index)));
		else
			return (-1);
	}
	return (ret > 9223372036854775807 ? -1 : ret);
}
