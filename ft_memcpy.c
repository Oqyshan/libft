/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:34:47 by ounal             #+#    #+#             */
/*   Updated: 2023/07/13 11:56:57 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>

int	main()
{
	int s[3];
	s[0] = 1;
	s[1] = 2;
	s[2] = 3;
	int d[3];
	ft_memcpy(d, s, 9);
	printf("%d\n", d[0]);
	printf("%d\n", d[1]);
	printf("%d\n", d[2]);
	return (0);
}
