/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:34:18 by ounal             #+#    #+#             */
/*   Updated: 2023/07/13 10:16:57 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	if (!str && !len)
		return (NULL);
	if (*needle == 0)
		return ((char *) str);
	needle_len = ft_strlen(needle);
	i = 0;
	while (str[i] && i < len && needle_len <= len - i)
	{
		if (ft_strncmp(str + i, needle, needle_len) == 0)
			return ((char *) str + i);
		i++;
	}
	return (NULL);
}
