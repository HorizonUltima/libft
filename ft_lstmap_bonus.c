/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgergink <hgergink@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 21:13:15 by hgergink          #+#    #+#             */
/*   Updated: 2025/06/27 21:13:37 by hgergink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*lastnode;

	if (!lst || !del)
		return ((void *)0);
	newlst = ft_lstnew(f(lst->content));
	lastnode = newlst;
	if (!newlst || !newlst->content)
		ft_lstdelone(newlst, del);
	while (lst->next)
	{
		lst = lst->next;
		lastnode->next = ft_lstnew(f(lst->content));
		if (!lastnode->next || !lastnode->next->content)
		{
			ft_lstclear(&newlst, del);
			return ((void *)0);
		}
		lastnode = lastnode->next;
	}
	return (newlst);
}
