/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehazir <eneshazrr@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:04:08 by ehazir            #+#    #+#             */
/*   Updated: 2022/02/16 12:39:03 by ehazir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_isalnum(int);
int	ft_isalpha(int);
int	ft_isdigit(int);
int	ft_isascii(int);
int	ft_isprint(int);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_atoi(const char *str);

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putnbr_fd(int nb, int fd);

size_t	ft_strlen(const char *);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content);

#endif