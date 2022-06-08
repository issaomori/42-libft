/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:53:00 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/07 15:44:41 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int     ft_isdigit (int i);
int     ft_isalpha (int i);
int     ft_isalnum (int i);
int     ft_isascii (int i);
int     ft_isprint (int i);
int     ft_strlen(const char *str);
void    *ft_memset (void *str, int c, size_t n);
void    ft_bzero (void *str, size_t n);
void    *ft_memcpy(void *dest, const void * src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int     ft_toupper(int change);
int     ft_tolower(int change);
char    *ft_strchr(const char *p, int ch);
char    *ft_strrchr(const char *str, int change);
int	    ft_strncmp(const char *str1, const char *str2, size_t n);
void    *ft_memchr(const void *str, int c, size_t n);
int     ft_memcmp(const void *str1, const void *str2, size_t n);
char	*ft_strnstr(const char *str, const char *find, size_t len);
int     ft_atoi(const char *str);
char	*ft_strdup(char *src);
void    *ft_calloc(size_t number, size_t size);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);

#endif
