/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 14:37:30 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/23 23:01:01 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*c;
	int		i;

	i = 0;
	if (s == NULL && f == NULL)
		return (NULL);
	c = ft_strnew(ft_strlen(s));
	if (c == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		c[i] = f(s[i]);
		i++;
	}
	return (c);
}
