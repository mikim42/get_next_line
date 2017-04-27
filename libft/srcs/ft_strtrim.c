/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:36:09 by mikim             #+#    #+#             */
/*   Updated: 2017/03/04 03:10:55 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strlen_nospaces(char *s, int *len, int *len2)
{
	int	i;
	int	j;
	int	k;
	int	res;

	i = 0;
	j = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[j] != '\0')
		j++;
	res = j;
	k = 0;
	while (s[j - 1] == ' ' || s[j - 1] == '\n' || s[j - 1] == '\t')
	{
		j--;
		k++;
	}
	res = res - i - k;
	if (res > 0)
		*len = res;
	else
		*len = 1;
	*len2 = k;
}

char		*ft_strtrim(char const *s)
{
	char	*r;
	int		len;
	int		len2;
	int		i;
	int		j;

	if (s == NULL)
		return (0);
	ft_strlen_nospaces((char*)s, &len, &len2);
	r = (char*)malloc(sizeof(char) * (len + 1));
	if (r == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[i + len2] != '\0')
	{
		r[j] = s[i];
		j++;
		i++;
	}
	r[j] = '\0';
	return (r);
}
