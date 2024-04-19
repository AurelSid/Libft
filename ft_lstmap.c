/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:06:20 by asideris          #+#    #+#             */
/*   Updated: 2024/04/19 13:55:49 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newList;
	t_list	*newcurr;
	void	*content;

	if (!f || !lst || !del)
		return (NULL);
	newList = NULL;
	while (lst)
	{
		content = f(lst->content);
		newcurr = ft_lstnew(content);
		 if (!newcurr)
		{
			del(content);
			ft_lstclear(&newcurr, (*del));
			return (newList);
		}
		ft_lstadd_back(&newList, newcurr);
		lst = lst->next;
	}
	return (newList);
}
