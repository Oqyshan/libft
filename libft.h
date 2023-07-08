/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:30:07 by ounal             #+#    #+#             */
/*   Updated: 2023/07/08 17:00:33 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include	<stdlib.h>
# include	<unistd.h>
# include	<stdio.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int nb);
int		ft_isalpha(int nb);
int		ft_isascii(int c);
int		ft_isdigit(int nb);
int		ft_isprint(int n);

void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *ptr, int nb, size_t length);




char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);

char	*ft_strjoin(const char *str1, const char *str2);
size_t	ft_strlcat(char *dest, char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);

int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);


int		ft_tolower(int nb);
int		ft_toupper(int nb);



char	*ft_strdup(const char *s);


#endif