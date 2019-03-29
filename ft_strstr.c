/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 21:00:47 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/29 19:15:10 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	char	*s;
	int		i;
	int		j;

	i = -1;
	s = (char *)str;
	if (to_find[0] == '\0')
		return (s);
	while (s[++i] != '\0')
	{
		j = 0;
		if (s[i + j] == to_find[j])
		{
			while (s[i + j] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (&s[i]);
				j++;
			}
		}
	}
	return (0);
}
