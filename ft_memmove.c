/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgergink <hgergink@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 19:56:34 by hgergink          #+#    #+#             */
/*   Updated: 2025/05/28 19:57:16 by hgergink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*dst;
	size_t			i;

	dst = dest;
	s = src;
	if (s > dst)
	{
		i = 0;
		while (i < n)
			dst[i] = s[i++];
	}
	else if (s < dst)
	{
		i = n;
		while (i-- > 0)
			dst[i] = s[i];
	}
	return (dest);
}
