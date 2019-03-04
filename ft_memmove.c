/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 18:27:06 by ehayes            #+#    #+#             */
/*   Updated: 2019/01/19 16:57:39 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove (void *destination, const void *source, size_t n)
{
	char *d;
	char *s;

	d = (char *)destination;
	s = (const char *)source;
	if (s < d)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1]
			n--;
		}

	}
	else
	{
		while (n-- > 0)
		{
			*d = *s;
			d ++;
			s ++;
		}
	}
	return (destination);
}
