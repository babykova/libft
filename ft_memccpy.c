/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 17:54:05 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/02 19:56:00 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *s;
	char *d;

	s = (char *)src;
	d = (char *)dst;
	while (n > 0 && *s != (char)c)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	if (n > 0)
	{
		*d = *s;
		d++;
		s++;
		return ((void *)d);
	}
	else
		return (NULL);
}
