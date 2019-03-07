/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 18:20:31 by ehayes            #+#    #+#             */
/*   Updated: 2019/03/02 22:06:06 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

void    *ft_memset(void *destination, int c, size_t n);
void    ft_bzero(void *b, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memccpy(void *dst, const void *src, int c, size_t n);
int     ft_strlen(const char *str);
void    *ft_memmove (void *destination, const void *source, size_t n);
void    *ft_memchr(const void *arr, int c, size_t n);
int     ft_memcmp(const void *arr1, const void *arr2, size_t n);
char    *ft_strcat(char *str1, const char *str2);
char    *ft_strncat(char *str1, const char *str2, size_t n);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strstr(char *str, const char *to_find);
char    *ft_strnstr(const char *str, const char *to_find, size_t n);
int     ft_strcmp(char *str1, char *str2);
int     ft_strncmp(char *str1, char *str2, unsigned int n);
int     ft_atoi(const char *str);
int     ft_isalpha(int c);
int     ft_iasdigit(int c);
///int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strdup(const char *src);
char    *ft_strcpy(char *dest, const char *src);
char    *ft_strncpy(char *dest, char *src, size_t n);
//char	*ft_strncpy(char *dest, char *src, size_t n);
void	ft_putstr(char const *str);
//char	*ft_strcpy(char *dest, const char *src);
///int		ft_atoi(const char *str);
void	ft_putchar(char c);
void    ft_memdel(void **ap);
//char    *ft_strnew(size_t size);
void    ft_strdel(char **as);
void    ft_strclr(char *s);
void    ft_striter(char *s, void (*f)(char *));
void    ft_striteri(char *s, void (*f)(unsigned int,
                                       char *));
///char    *ft_strmap(char const *s, char (*f)(char));
///char *ft_strmapi(char const *s, char
               //  (*f)(unsigned int, char));
int    ft_strequ(char const *s1, char const *s2);
int    ft_strnequ(char const *s1, char const *s2,
                  size_t n);
//char    *ft_strsub(char const *s, unsigned int start, size_t len);
//char    *ft_strjoin(char const *s1, char const *s2);
//char    *ft_strtrim(char const *s);

#endif
