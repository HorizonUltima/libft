/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgergink <hgergink@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 19:51:42 by hgergink          #+#    #+#             */
/*   Updated: 2025/06/25 12:32:44 by hgergink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_convey(char const *s, char *str, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	subs[i] = 0;
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*subs;

	if (!s)
		return ((void *)0);
	slen = ft_strlen(s);
	if (*s == 0 || slen <= start)
	{
		subs = (char *)malloc(1);
		if (!subs)
			return ((void *)0);
		subs[0] = 0;
		return (subs);
	}
	if (slen - (start) < len)
		len = slen - (start);
	subs = (char *)malloc(len + 1);
	if (!subs)
		return ((void *)0);
	return (ft_convey(s, subs, start, len));
}
