/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:20:43 by axlleres          #+#    #+#             */
/*   Updated: 2024/11/09 17:29:19 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *res;
	t_list *start;

	if (lst == NULL)
		return (NULL);
	res = ft_lstnew((*f)(lst->content));
	start = res;
	if (res == NULL)
		return (NULL);
	while (lst)
	{
		res->next = ft_lstnew((*f)(lst->content));
		if (res->next == NULL)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		res = res->next;
		lst = lst->next;
	}
	return (start);
}