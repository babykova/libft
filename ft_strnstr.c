/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 14:57:47 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/26 14:59:39 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_plus(const char *str, const char *to_find, size_t n, size_t i)
{
	size_t x;
	size_t y;
	size_t m;

	while (n > i && str[i] != '\0')
	{
		x = i;
		y = 0;
		if (str[i] == to_find[0])
		{
			m = n;
			while (m > y && str[x] && to_find[y] && str[x] == to_find[y])
			{
				x++;
				y++;
			}
			if (to_find[y] == '\0')
				return ((char *)(str + i));
		}
		n--;
		i++;
	}
	return (0);
}

char		*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t i;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	return (ft_plus(str, to_find, n, i));
}
