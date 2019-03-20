/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 18:56:46 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/13 19:49:07 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char const	*end;
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strnew(0));
	else
	{
		end = s;
		j = ft_strlen(s) - 1;
		while (end[j] == ' ' || end[j] == '\t' || end[j] == '\n')
			j--;
		return (ft_strsub(s, i, j - i + 1));
	}
}
