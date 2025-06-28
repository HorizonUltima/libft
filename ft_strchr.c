/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgergink <hgergink@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:07:02 by hgergink          #+#    #+#             */
/*   Updated: 2025/06/28 12:35:44 by hgergink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] && (unsigned char)str[i] != (unsigned char)c)
		i++;
	if ((unsigned char)str[i] == (unsigned char)c)
		return (str + i);
	return ((void *)0);
}
