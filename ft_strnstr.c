/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 14:57:47 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/24 23:02:58 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	m;
	size_t	i;
	int		x;
	int		y;

	if (to_find[0] == '\0')
		return ((char *)str);
	while (n > i && str[i] != '\0')
	{
		x = i;
		y = 0;
		if (str[i] == to_find[0])
		{
			m = n;
			while ((m - (y++)) && str[x] && to_find[y] && str[x] == to_find[y])
				x++;
			if (to_find[y] == '\0')
				return ((char *)(str + i));
		}
		n--;
		i++;
	}
	return (0);
}
