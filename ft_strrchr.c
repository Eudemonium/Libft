/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:31:51 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/23 14:15:28 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen((char *)s) + 1;
	ptr = ft_strchr(s, '\0');
	if ((char)c == '\0')
		return (ptr);
	while (len--)
	{
		if (ptr[0] == (char)c)
			return (ptr);
		ptr--;
	}
	return (NULL);
}
