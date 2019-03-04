/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 21:25:46 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/02 20:35:29 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t n)
{
	char *str;

	str = str1;
	while (*str1)
		str1++;
	while (n-- > 0 && *str2)
		*str1++ = *str2++;
	*str1 = '\0';
	return (str);
}