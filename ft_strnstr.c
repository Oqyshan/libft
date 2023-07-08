/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:34:18 by ounal             #+#    #+#             */
/*   Updated: 2023/07/07 17:05:06 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[a] != '\0')
	{
		b = 0;
		while (haystack[a + b] == needle[b] && a + b < len)
		{
			if (haystack[a + b] == '\0' && needle[b] == '\0')
				return ((char *)&haystack[a]);
			b++;
		}
		if (needle[b] == '\0')
			return ((char *)haystack + a);
		a++;
	}
	return (0);
}
