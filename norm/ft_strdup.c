/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 11:00:22 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/02 20:19:38 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

char	*ft_strcpy(char *dest, const char *src);

int		ft_strlen(const char *str);

char	*ft_strdup(const char *src)
{
	char *m;

	m = (char*)malloc(sizeof(*m) * (ft_strlen(src) + 1));
	m = ft_strcpy(m, src);
	return (m);
}
