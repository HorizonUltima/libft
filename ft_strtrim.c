/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgergink <hgergink@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 12:59:29 by hgergink          #+#    #+#             */
/*   Updated: 2025/06/26 18:56:37 by hgergink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_setstart(char const *str, size_t *i, char const *set)
{
	size_t	j;

	if (!set)
		return ;
	j = 0;
	while (str[*i] && set[j])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == str[*i])
			{
				*i += 1;
				break ;
			}
			j++;
		}
	}
	return ;
}

static void	ft_setend(char const *str, size_t *i, char const *set)
{
	size_t	j;

	if (!set)
		return ;
	j = 0;
	while (set[j])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == str[*i - 1])
			{
				*i -= 1;
				break ;
			}
			j++;
		}
		if (*i == 0)
			break ;
	}
	return ;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*s2;

	if (!s1)
		return ((void *)0);
	start = 0;
	ft_setstart(s1, &start, set);
	end = ft_strlen(s1);
	if (end == 0)
		return (ft_calloc(1, 1));
	ft_setend(s1, &end, set);
	if (end-- > start)
	{
		i = 0;
		s2 = (char *)malloc(sizeof(char) * (end - start + 2));
		if (!s2)
			return ((void *)0);
		while (start <= end)
			s2[i++] = s1[start++];
		s2[i] = 0;
		return (s2);
	}
	return (ft_calloc(1, 1));
}
