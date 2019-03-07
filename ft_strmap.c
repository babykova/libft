/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 14:37:30 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/02 20:32:09 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *c;

	c = ft_strnew(ft_strlen(s);
	if (c == NULL)
		return (NULL);
	while (*s)
	{
		*c = (*f)(*s);
		c++;
		s++;
	}
	return (c);
}
