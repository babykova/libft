/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 15:09:28 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/02 15:43:13 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char
		(*f)(unsigned int, char))
{
	char 			*c;
	unsigned int	i;
	i = 0;
	c = ft_strnew(ft_strlen(s);
	if (c == NULL)
	        return (NULL);
	while (s[i])
	{
		c[i] = (*f)(i, s[i]);
		i++;
	}
}
