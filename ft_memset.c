/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:27:31 by ounal             #+#    #+#             */
/*   Updated: 2023/07/13 10:17:10 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int nb, size_t length)
{
	size_t	index;

	index = 0;
	while (index < length)
	{
		((unsigned char *)ptr)[index] = (unsigned char)nb;
		index++;
	}
	return (ptr);
}
