/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgergink <hgergink@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:58:29 by hgergink          #+#    #+#             */
/*   Updated: 2025/06/26 13:56:40 by hgergink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*source;
	size_t			i;

	if (!dest || !src)
		return ((void *)0);
	d = dest;
	source = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = source[i];
		i++;
	}
	return (dest);
}
