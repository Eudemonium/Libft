/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:39:22 by jagagas           #+#    #+#             */
/*   Updated: 2021/12/08 14:56:08 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*new;

	head = NULL;
	while (lst)
	{
		new = f(lst);
		if (new)
			ft_lstaddback(&head, new);
		else
		{
			ft_lstdel(&head, ft_del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (head);
}
