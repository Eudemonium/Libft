/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:43:17 by jagagas           #+#    #+#             */
/*   Updated: 2021/12/06 17:01:34 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if ((s1 == NULL && s2 == NULL) || \
		(s1 != NULL && s2 != NULL && ft_strcmp(s1, s2) == 0))
		return (1);
	return (0);
}
