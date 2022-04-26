/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:46:56 by nsar              #+#    #+#             */
/*   Updated: 2022/04/07 19:09:03 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <string.h>
# include <unistd.h>

void		ft_bzero(void *s, unsigned int n);

int			ft_isalnum(int c);

int			ft_isalpha(int c);

int			ft_isascii(int c);

int			ft_isdigit(int c);

int			ft_isprint(int c);

void		*ft_memcpy(void *dst, const void *src, size_t n);

void		*ft_memmove(void *dst, const void *src, size_t len);

void		*ft_memset(void *s, int c, size_t n);

char		*ft_strchr(const char *s, int c);

char		*ft_substr(char const *s, unsigned int start, size_t len);

int			ft_tolower(int c);

int			ft_toupper(int c);

int			ft_strlen(char *str);

size_t		ft_strlcpy(const char *dest, const char *src, size_t destsize);

size_t		ft_strlcat(char *dest, const char *src, size_t size);

char		*ft_strrchr(const char *s, int c);

int			ft_strncmp(const char *s1, const char *s2, size_t n);

void		*ft_memchr(const void *s, int c, size_t n);

int			ft_memcmp(const void *s1, const void *s2, size_t n);

char		*ft_strnstr(const char *haystack, const char *needle, size_t len);

int			ft_atoi(const char *str);

char		*ft_strdup(const char *s1);

void		*ft_calloc(size_t count, size_t size);

char		*ft_substr(char const *s, unsigned int start, size_t len);

char		*ft_strtrim(char const *s, char const *set);

char		**ft_split(char const *s, char c);

char		*ft_itoa(int n);

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void		ft_striteri(char *s, void (*f)(unsigned int, char *));

void		ft_putchar_fd(char c, int fd);

void		ft_putstr_fd(char *s, int fd);

void		ft_putendl_fd(char *s, int fd);

void		ft_putnbr_fd(int nb, int fd);
#endif
