/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 16:20:07 by mikim             #+#    #+#             */
/*   Updated: 2017/03/02 17:43:47 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	size_t			i;

	s2 = (unsigned char*)s;
	i = 0;
	while (n--)
	{
		if (s2[i] == (unsigned char)c)
			return (s2 + i);
		i++;
	}
	return (NULL);
}
