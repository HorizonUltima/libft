/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgergink <hgergink@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 19:01:49 by hgergink          #+#    #+#             */
/*   Updated: 2025/06/27 19:01:50 by hgergink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*broom;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		broom = *lst;
		*lst = (*lst)->next;
		free(broom);
	}
	return ;
}
