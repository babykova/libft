/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 18:42:03 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/02 19:48:20 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	char	*s;

	s = (char *)arr;
	while (n > 0 && *s)
	{
		if (*s == (unsigned char)c)
			return (s);
		n--;
		s++;
	}
	return (NULL);
}
