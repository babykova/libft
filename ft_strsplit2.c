/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 19:12:21 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/15 23:07:09 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_count(char const *str, char a)
{
	int	i;

	i = 0;
	while (*str != '\0')
		if (*str == a)
			i++;
	return (i);
}

int	ft_find(int k, char const *str, char b)
{
	while (str[k] == b)
		k++;
	return (k);
}


static int  ft_word_count(char *s, char c)
{
    static int  i;
    int         j;
    
    i = 0;
	j = 0;
    if (s[0] != c)
    {
        i = 1;
        j++;
    }
    while (s[j+1] != '\0')
    {
        if (s[j] == c && s[j+1] != c)
			i++;
		j++;
	}
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**dsc;
	char	*d;
	int		k;
	int		i;
	int		j;
	int		l;

	i = -1;
	j = 0;
	k = 0;
	if (s == NULL)
		return (NULL);
	if (!(dsc = (char **)malloc(sizeof(char *) * ft_word_cout(s, c) + 1)))
		return (NULL);
	while (s[k] != '\0')
	{
		if (s[k] == c)
			k = ft_find(k, s, c);
		else
		{
			i++;
			while (s[k] != '\0' && s[k] != c)
			{
				l = 0;
				ks = ft_find(k, s, c);
				len = ks - k + 1;
				d = (char *)malloc(sizeof(char) * len  + 1)));
				d[l] = s[k];
				l++;
				k++;
			}
			dsc[i] = d;
		}
	}
	return (dsc);
}
