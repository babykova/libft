/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 16:31:37 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/02 19:59:01 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	char *str;

	str = (char *)destination;
	while (n-- > 0)
	{
		*str = (char)c;
		str++;
	}
	return (destination);
}
