/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:57:47 by jagagas           #+#    #+#             */
/*   Updated: 2021/12/06 17:11:29 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	index;

	if (s == NULL )
		return (NULL);
	str = ft_strnew(len);
	if (str != NULL)
	{
		index = 0;
		while (start-- && *s)
			s++;
		if (*s)
			ft_strncpy(str, s, len);
		return (str);
	}
	return (NULL);
}
