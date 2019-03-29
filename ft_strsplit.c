/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 18:42:33 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/29 18:50:52 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
			count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count);
}

static int	ft_len(char const *s, char c)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static char	**ft_free(char **s, int n)
{
	while (n > 0)
	{
		free(s[n]);
		n--;
	}
	return (NULL);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;
	int		x;

	i = 0;
	j = 0;
	k = 1;
	if (!s || !(str = (char **)malloc((sizeof(char *) * (ft_count(s, c) + 1)))))
		return (NULL);
	while (k <= ft_count(s, c))
	{
		x = 0;
		if (!(str[k - 1] = ft_strnew(ft_len(&s[i], c) + 1)))
			return (ft_free(str, k - 1));
		while (s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
			str[k - 1][x++] = s[i++];
		str[k - 1][x] = '\0';
		k++;
	}
	str[k - 1] = 0;
	return (str);
}
