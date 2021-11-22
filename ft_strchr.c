/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:19:52 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/22 23:33:35 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (ptr[0])
	{
		if (ptr[0] == (char)c)
			return (ptr);
		ptr++;
	}
	if (c == '\0' && ptr[0] == '\0')
		return (ptr);
	return (NULL);
}
