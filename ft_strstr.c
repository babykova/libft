/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 21:00:47 by ehayes            #+#    #+#             */
/*   Updated: 2018/10/23 23:11:11 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, const char *to_find)
{
	int i;
	int j;
	int x;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			x = i;
			while (str[i] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (&str[x]);
				j++;
				i++;
			}
			i = x;
		}
		i++;
	}
	return (0);
}
