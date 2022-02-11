/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:57:47 by jagagas           #+#    #+#             */
/*   Updated: 2022/02/11 10:40:18 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*str;

	if (s == NULL )
		return (NULL);
	str = ft_strnew(len);
	if (str != NULL)
	{
		while (start-- && *s)
			s++;
		if (*s)
			ft_strncpy(str, s, len);
		return (str);
	}
	return (NULL);
}
