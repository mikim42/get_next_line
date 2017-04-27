/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 21:33:01 by mikim             #+#    #+#             */
/*   Updated: 2017/03/04 21:35:51 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*res;
	size_t	i;
	size_t	j;

	i = -1;
	res = (char*)big;
	if (*little == '\0')
		return (res);
	while (res[++i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && len > i + j)
		{
			if (little[j + 1] == '\0')
				return (&res[i]);
			j++;
		}
	}
	return (NULL);
}
