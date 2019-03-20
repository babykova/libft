/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 18:42:03 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/11 17:33:14 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char *s;

	if (arr == NULL)
		return (NULL);
	s = (unsigned char*)arr;
	while (n > 0 && *s != (unsigned char)c)
	{
		n--;
		s++;
	}
	if (n == 0)
		return (NULL);
	else
		return (s);
}
