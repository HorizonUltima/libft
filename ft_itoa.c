/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgergink <hgergink@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:04:59 by hgergink          #+#    #+#             */
/*   Updated: 2025/06/25 16:34:15 by hgergink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_filling(char *str, int holder, int size, int sign)
{
	str[size + sign] = 0;
	while (0 <= --size)
	{
		str[size + sign] = holder % 10;
		holder /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		holder;
	int		size;
	int		sign;

	size = 1;
	sign = 0;
	if (n < 0)
		sign += 1;
	holder = n;
	while (n >= 10)
	{
		n /= 10;
		size++;
	}
	str = (char *)malloc(sizeof(char) * (size + 1 + sign));
	if (!str)
		return ((void *)0);
	if (sign)
		str[0] = '-';
	return (ft_filling(str, holder, size, sign));
}
