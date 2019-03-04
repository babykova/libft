/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 14:57:47 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/02 20:50:20 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	m;

	if (*to_find == '\0')
		return ((char *)str);
	while (n-- && *str != '\0')
	{
		if (*str == *to_find)
		{
			s1 = (char *)str;
			s2 = (char *)to_find;
			m = n;
			while (m-- && *s1 && *s2 && *s1 == *s2)
			{
				s1++;
				s2++;
			}
			if (*s2 == '\0')
				return ((char *)str);
		}
		str++;
	}
	return (0);
}
