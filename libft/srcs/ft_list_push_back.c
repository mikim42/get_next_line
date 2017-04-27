/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:18:26 by mikim             #+#    #+#             */
/*   Updated: 2017/03/06 20:09:04 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list2 **begin_list, void *data)
{
	t_list2 *elem;

	elem = *begin_list;
	if (elem != NULL)
	{
		while (elem->next != NULL)
			elem = elem->next;
		elem->next = ft_create_elem(data);
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}
