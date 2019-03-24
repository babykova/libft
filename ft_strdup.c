/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 11:00:22 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/23 21:32:01 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char *m;

	m = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (m == NULL)
		return (NULL);
	m = ft_strcpy(m, src);
	return (m);
}
