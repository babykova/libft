/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 21:43:49 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/14 21:56:41 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int     ft_strlen(const char *str)
{
    int i;
    
    i = 0;
    while (*str != '\0')
    {
        str++;
        i++;
    }
    return (i);
}

void    ft_putstr_fd(char const *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

void    ft_putstr(char const *str)
{
	ft_putstr_fd(str, 1);
}


int ft_nbrlen(int n)
{
    int len;
    
    len = 0;
    while (n != 0)
    {
        n = n / 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    char    *str;
    int     len;
    int     sign;
    
    sign = 1;
    len = ft_nbrlen(n);
    if (n < 0)
    {
        n *= -1;
        sign = -1;
        len += 1;
    }
    str = (char *)malloc(sizeof(char) * (len + 1));
    str[len] = '\0';
    len -= 1;
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

int main()
{
    ft_putstr(ft_itoa(2147483648));
    return 0;
}
