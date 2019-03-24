/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 19:27:00 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/24 21:44:20 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	long	i;
	int		j;

	i = 0;
	j = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		j = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (i > i * 10 + *str - '0')
			return ((j > 0) ? -1 : 0);
		i = i * 10 + *str - '0';
		str++;
	}
	return (i * j);
}
