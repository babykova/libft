/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 20:03:11 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/23 21:35:32 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbrlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char		*ft_perevod(int sign, int len, int n, char *str)
{
	if (sign == -1)
	{
		while (len != 0)
		{
			str[len] = '0' + (n % 10);
			n = n / 10;
			len--;
		}
		str[0] = '-';
	}
	else
	{
		while (len >= 0)
		{
			str[len] = '0' + (n % 10);
			n = n / 10;
			len--;
		}
	}
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	sign = 1;
	len = ft_nbrlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		sign = -1;
		len += 1;
	}
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	len -= 1;
	str = ft_perevod(sign, len, n, str);
	return (str);
}
