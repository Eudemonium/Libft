/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:19:52 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/13 15:29:31 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;

	while (s[index])
	{
		if (s[index] == c)
			return (s[index]);
	}
	if (c == '\0')
		return (s[index]);
	return (NULL);
}
