/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 16:59:38 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/11 17:35:53 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char*)arr1;
	s2 = (unsigned char*)arr2;
	while (*s1 == *s2 && n-- > 0)
	{
		s1++;
		s2++;
	}
	if (n == 0)
		return (0);
	else
		return ((int)(*s1 - *s2));
}
