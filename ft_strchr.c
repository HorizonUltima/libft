/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgergink <hgergink@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:07:02 by hgergink          #+#    #+#             */
/*   Updated: 2025/06/12 15:33:16 by hgergink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*str;

	if (!s)
		return ((void *)0);
	str = (unsigned char)s;
	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (str[i] == c)
		return (str + i);
	return ((void *)0);
}
