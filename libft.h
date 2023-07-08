/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:30:07 by ounal             #+#    #+#             */
/*   Updated: 2023/07/07 20:07:15 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include	<stdlib.h>
# include	<unistd.h>
# include	<stdio.h>

void	*ft_memset(void *ptr, int nb, size_t length);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int nb);
int		ft_isalpha(int nb);
int		ft_isascii(int c);
int		ft_isdigit(int nb);
int		ft_isprint(int n);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *str);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_tolower(int nb);
int		ft_toupper(int nb);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strjoin(const char *str1, const char *str2);
void	*ft_calloc(size_t count, size_t size);
char	*strdup(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);

#endif