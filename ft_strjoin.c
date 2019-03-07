/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 18:18:52 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/02 20:27:57 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	char	*cs;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
		return (ft_strdup(s2));
	else if (s2 == NULL)
		return (ft_strdup(s1));
	*c = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (cs == NULL)
		return (NULL);
	cs = c;
	while (*s1 != '\0')
	{
		*cs++ = *s1++;
	}
	while (*s2 != '\0')
	{
		*cs++ = *s2++;
	}
	*cs = '/0';
	return (c);
}
