/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgergink <hgergink@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:43:15 by hgergink          #+#    #+#             */
/*   Updated: 2025/06/25 18:47:23 by hgergink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_splitcount(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		flag;

	i = 0;
	flag = 0;
	count = 0;
	while (s[i])
	{
		while (flag == 0 && s[i] != c)
		{
			count += 1;
			flag = 1;
		}
		if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)
			flag = 0;
		i++;
	}
	return (count);
}

void	*ft_freesplit(char **strary, size_t size)
{
	while (size)
		free(strary[--size]);
	return ((void *)0);
}

static char	**ft_splitter(char const *s, char **result, char c)
{
	size_t	i;
	size_t	start;
	size_t	slice;

	i = 0;
	slice = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			result[slice] = ft_substr(s, start, i - start);
			if (!result)
				return (ft_freesplit(result, slice));
			slice++;
		}
		else
			i++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return ((void *)0);
	result = (char **)malloc(sizeof(char *) * (ft_splitcount(s, c) + 1));
	if (!result)
		return ((void *)0);
	return (ft_splitter(s, result, c));
}
