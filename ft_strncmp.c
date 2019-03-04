/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 22:08:24 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/02 20:42:15 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
