/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:10:18 by jagagas           #+#    #+#             */
/*   Updated: 2022/02/07 11:44:22 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddback(t_list **alst, t_list *new)
{
	t_list	*lst;

	if (*alst)
	{
		lst = (*alst);
		while (lst->next)
			lst = lst->next;
		lst->next = new;
	}
	else
		(*alst) = new;
}
