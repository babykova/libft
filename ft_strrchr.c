/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 23:39:41 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/02 20:53:20 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char *last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last = (char*)s;
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	else
		return (last);
}
