/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 21:15:15 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/27 20:48:11 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int		i;
	char	*new;

	new = dest;
	i = 0;
	while ((src[i] != '\0') && (n > 0))
	{
		new[i] = src[i];
		i++;
		n--;
	}
	while (n > 0)
	{
		new[i] = '\0';
		i++;
		n--;
	}
	return (new);
}
