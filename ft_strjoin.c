/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:37:10 by ounal             #+#    #+#             */
/*   Updated: 2023/07/07 14:59:26 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char	*s2)
{
	char	*result;
	size_t	target;
	size_t	index;

	if (!(s1 || s2))
		return (NULL);
	result = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (result == NULL)
		return (NULL);
	target = 0;
	while (s1[target])
	{
		result[target] = s1[target];
		target++;
	}
	index = 0;
	while (s2[index])
	{
		result[target + index] = s2[index];
		index++;
	}
	result[target + index] = '\0';
	return (result);
}
