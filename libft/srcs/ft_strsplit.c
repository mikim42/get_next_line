/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 00:38:10 by mikim             #+#    #+#             */
/*   Updated: 2017/03/04 05:05:52 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_malloc(char *s, int len)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = (char*)malloc(sizeof(char) * (len - 1));
	if (tmp == NULL)
		return (NULL);
	while (i < len)
	{
		tmp[i] = s[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

static void	ft_fill(char **r, char *s, char c)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		len = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			len++;
		}
		if (s[i - 1] != c)
			r[j++] = ft_malloc(s + (i - len), len);
	}
}

static int	ft_check_wd(char const *s, char c)
{
	int flag;
	int cnt;
	int i;

	i = 0;
	cnt = 0;
	flag = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			flag = 0;
		if (s[i] != c && flag == 0)
		{
			flag = 1;
			cnt++;
		}
		i++;
	}
	return (cnt);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**r;
	int		wds;

	if (s == NULL)
		return (0);
	wds = ft_check_wd(s, c);
	r = (char**)malloc(sizeof(char*) * (wds + 1));
	if (!r)
		return (NULL);
	r[wds] = 0;
	ft_fill(r, (char*)s, c);
	return (r);
}
