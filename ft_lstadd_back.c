/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:55:37 by ounal             #+#    #+#             */
/*   Updated: 2023/07/13 16:50:03 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*swap;

	if (lst)
	{
		if (*lst == 0)
			*lst = new;
		else
		{
			swap = ft_lstlast(*lst);
			swap->next = new;
		}
	}
}
