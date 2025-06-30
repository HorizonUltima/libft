/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgergink <hgergink@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 21:13:15 by hgergink          #+#    #+#             */
/*   Updated: 2025/06/28 21:11:03 by hgergink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*lastnode;
	void	*temp;

	if (!lst || !del || !f)
		return ((void *)0);
	temp = f(lst->content);
	newlst = ft_lstnew(temp);
	lastnode = newlst;
	while (lst->next || !lastnode)
	{
		if (!lastnode)
		{
			ft_lstclear(&newlst, del);
			free(temp);
			return ((void *)0);
		}
		lst = lst->next;
		temp = f(lst->content);
		lastnode->next = ft_lstnew(temp);
		lastnode = lastnode->next;
	}
	return (newlst);
}
