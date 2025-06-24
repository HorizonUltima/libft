/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgergink <hgergink@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:12:04 by hgergink          #+#    #+#             */
/*   Updated: 2025/06/04 16:30:02 by hgergink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return ((void *)0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = (char *)malloc(len1 + len2 + 1);
	if (!s3)
		return ((void *)0);
	i = 0;
	while (i < len1)
		s3[i] = s1[i++];
	j = 0;
	while (j < len2)
		s3[i + j] = s2[j++];
	s3[i + j] = 0;
	return (s3);
}
