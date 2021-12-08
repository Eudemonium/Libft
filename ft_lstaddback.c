/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:10:18 by jagagas           #+#    #+#             */
/*   Updated: 2021/12/07 19:46:48 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddback(t_list **alst, t_list *new)
{
	if (*alst)
	{
		while ((*alst)->next)
			(*alst) = (*alst)->next;
	}
	(*alst)->next = new;
}