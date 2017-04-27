/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 14:13:05 by mikim             #+#    #+#             */
/*   Updated: 2017/03/02 21:20:24 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;

	while (*s)
	{
		if (*s == c)
		{
			tmp = (char*)s;
			return (tmp);
		}
		s++;
	}
	if (c == '\0')
	{
		tmp = (char*)s;
		return (tmp);
	}
	return (NULL);
}
