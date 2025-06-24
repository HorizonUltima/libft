/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgergink <hgergink@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:32:53 by hgergink          #+#    #+#             */
/*   Updated: 2025/06/03 14:03:51 by hgergink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dup;

	dup = (char *)malloc(ft_strlen(s) + 1);
	if (!dup)
		return ((void *)0);
	i = 0;
	while (s[i])
		dup[i] = s[i++];
	dup[i] = 0;
	return (dup);
}
